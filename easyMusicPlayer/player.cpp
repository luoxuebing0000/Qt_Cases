#include "player.h"
#include "ui_player.h"
#include <QDebug>
#include <QtWinExtras>
#include <QList>

player::player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::player)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);//隐藏标题栏
    setWindowIcon(QIcon(":/new/prefix1/image/tray.jpg"));
    myPlayer=new QMediaPlayer();
    ui->volum->setValue(50);
    myPlayer->setVolume(ui->volum->value());
    playList=new QMediaPlaylist;
    trayIcon=new QSystemTrayIcon;
    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,
            SLOT(tuopan(QSystemTrayIcon::ActivationReason)));//将托盘图标和双击事件关联

    QPixmap pixmap(":/new/prefix1/image/background.jpg");//当前文件夹下面的图片
    QPalette palette = this->palette();
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    connect(playList,SIGNAL(currentIndexChanged(int)),this,SLOT(mediaChange(int)));
    setPalette(palette);

    //任务栏按钮
    QMenu * menu=new QMenu(this);
    if (QtWin::isCompositionEnabled()) {
        QtWin::enableBlurBehindWindow(menu);
    } else{
        QtWin::disableBlurBehindWindow(menu);
        menu->hide();
    }
    taskBar=new QWinThumbnailToolBar();
    taskBar->setWindow(windowHandle());
    backToolBtn=new QWinThumbnailToolButton(taskBar);
    backToolBtn->setToolTip("上一首");
    backToolBtn->setIcon(QIcon(":/new/prefix1/image/back.png"));
    connect(backToolBtn,SIGNAL(clicked()),this,SLOT(on_backBtn_clicked()));
    pauseToolBtn=new QWinThumbnailToolButton(taskBar);
    connect(pauseToolBtn,SIGNAL(clicked()),this,SLOT(on_pauseBtn_clicked()));
    pauseToolBtn->setToolTip("暂停");
    pauseToolBtn->setIcon(QIcon(":/new/prefix1/image/pause.png"));
    nextToolBtn=new QWinThumbnailToolButton(taskBar);
    nextToolBtn->setToolTip("下一首");
    nextToolBtn->setIcon(QIcon(":/new/prefix1/image/next.png"));
    connect(nextToolBtn,SIGNAL(clicked()),this,SLOT(on_nextBtn_clicked()));
    taskBar->addButton(backToolBtn);
    taskBar->addButton(pauseToolBtn);
    taskBar->addButton(nextToolBtn);
    //歌曲列表
    songListModel=new QStandardItemModel;
    songListModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("歌曲列表")));   
    ui->songList->setModel(songListModel);
    ui->songList->setColumnWidth(0,390);    
    ui->songList->verticalHeader()->hide();
    ui->songList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->songList->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->songList,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(myPlayerSlot(QModelIndex)));
    //定时器
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(setPosition()));
}

player::~player()
{
    delete ui;
}

void player::on_closeBtn_clicked()//单击关闭按钮，产生托盘和托盘菜单
{
    this->hide();
    ui->nameLabel->styleSheet();
    trayIcon->setIcon(QIcon(":/new/prefix1/image/tray.jpg"));
    QMenu *trayMenu=new QMenu();
    aboutAction=new QAction(tr("关于"),this);
    quitAction=new QAction(tr("退出"),this);
    trayMenu->addAction(aboutAction);
    connect(aboutAction,SIGNAL(triggered(bool)),this,SLOT(showAbout()));
    trayMenu->addAction(quitAction);
    connect(quitAction,SIGNAL(triggered(bool)),this,SLOT(close()));
    trayIcon->setContextMenu(trayMenu);
    trayIcon->setToolTip("托盘图标");
    trayIcon->show();
    trayIcon->showMessage("主人","我在这里哦",QSystemTrayIcon::Information,5000);//一定要放在这里，否则提示信息会不显示
}

void player::on_miniBtn_clicked()
{
    this->showMinimized();
}
void player::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)//button()是按钮
    {
        drag=e->globalPos()-this->geometry().topLeft();//鼠标位置减去左上角的左边
        e->accept();
    }
}
void player::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)//buttons()返回的是按钮状态
    {
        move(e->globalPos()-drag);
        e->accept();
    }
}
//选择歌曲
void player::on_pushButton_2_clicked()
{
    QString path=QFileDialog::getOpenFileName(this,tr("选择一首歌曲"),"/","*.mp3");
    QFileInfo fileInfo;
    fileInfo=QFileInfo(path);
    QString fileName=fileInfo.baseName();
    ui->nameLabel->setText(fileName);
    myPlayer->setMedia(QUrl::fromLocalFile(path));
    myPlayer->play();

}

//暂停按钮
void player::on_pauseBtn_clicked()
{
    switch (myPlayer->state()) {
    case QMediaPlayer::PlayingState:
        timer->stop();
        currentIndex=playList->currentIndex();
        pausePosition=myPlayer->position();
        myPlayer->pause();
        break;
    case QMediaPlayer::PausedState:
        myPlayer->setMedia(playList->media(currentIndex));
        myPlayer->setPosition(pausePosition);
        timer->start(1000);
        myPlayer->play();
        break;
    default:
        break;
    }

}
//音量调节
void player::on_volum_valueChanged(int value)
{
    myPlayer->setVolume(value);
}
void player::tuopan(QSystemTrayIcon::ActivationReason reason)//双击托盘图标，恢复程序正常界面
{
    switch (reason)
    {
    case QSystemTrayIcon::DoubleClick:
        this->showNormal();
        break;
    default:
        break;
    }
}
//显示关于本程序对话框
void player::showAbout()
{
    about showabout;
    showabout.setModal(false);
    showabout.setWindowTitle("关于本程序");
    showabout.exec();
}

//导入多首歌曲
void player::on_importBtn_clicked()
{
    path=QFileDialog::getOpenFileNames(this,"选择歌曲","/","(*.mp3)");
    int i=0;
    QString addSongs;
    QListIterator<QString> mylist(path);
    while(mylist.hasNext())
    {
        addSongs=mylist.next();
        QFileInfo fileInfo;
        fileInfo=QFileInfo(addSongs);
        QString fileName=fileInfo.fileName();
        songListModel->setItem(i,0,new QStandardItem(fileName));
        playList->addMedia(QUrl::fromLocalFile(addSongs));
        i++;
    }

    playList->setPlaybackMode(QMediaPlaylist::Loop);
    myPlayer->setPlaylist(playList);

}
//双击播放
void player::myPlayerSlot(QModelIndex index)
{

    timer->start(1000);
    int n=index.row();
    playList->setCurrentIndex(n);

//    myPlayer->setMedia(playList->currentMedia());这句话不能加，加了反而错误
    myPlayer->play();
}
//设置播放进度条
void player::setPosition()
{
    qint64 position=myPlayer->position();
    ui->horizontalSlider->setMaximum(myPlayer->duration());
    ui->horizontalSlider->setSliderPosition(position);
}
void player::on_horizontalSlider_valueChanged(int value)//快进和快退功能
{
    qint64 currentPosition=myPlayer->position();
    if(qAbs(value-currentPosition)>2000&&(ui->horizontalSlider->value()!=0))
    {
        myPlayer->stop();
        timer->stop();
        myPlayer->setPosition(value);
        timer->start();
        myPlayer->play();
    }
}

void player::on_nextBtn_clicked()//播放下一首
{
    if(playList->mediaCount()-playList->currentIndex()!=1)//这里注意的是，和我们正常数数一样，mediaCount是从1开始计数的
    {
        //myPlayer->setMedia(playList->media(playList->nextIndex()));
        playList->setCurrentIndex(playList->nextIndex());
        myPlayer->play();
    }
    else
    {
        playList->setCurrentIndex(0);
       // myPlayer->setMedia(playList->media(0));
        myPlayer->play();
    }
}

void player::on_backBtn_clicked()//播放上一首
{
    if(playList->currentIndex()!=0)//这里注意的是，和我们正常数数一样，mediaCount是从1开始计数的
    {
        //myPlayer->setMedia(playList->media(playList->previousIndex()));
        playList->setCurrentIndex(playList->previousIndex());
        myPlayer->play();
    }
    else
    {
        playList->setCurrentIndex(playList->mediaCount()-1);
        //myPlayer->setMedia(playList->media(playList->mediaCount()-1));
        myPlayer->play();
    }

}
void player::mediaChange(int i)
{
    ui->nameLabel->setText(path.at(i));
}


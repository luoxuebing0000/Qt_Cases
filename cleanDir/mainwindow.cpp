#include "mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QDir>
#include <QMessageBox>
#include "about.h"
#include "introduction.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow())
{
    ui->setupUi(this);
    filepath = QString();
    filePathList.clear();
    filters = QStringList();
}

MainWindow::~MainWindow()
{}

void MainWindow::on_pushButton_clicked()
{

    if(filepath.isEmpty())
    {
        filepath =QFileDialog::getExistingDirectory(this,
                                                    "打开目录",
                                                    "/",
                                                    QFileDialog::ShowDirsOnly |
                                                    QFileDialog::DontResolveSymlinks);

    }
    else {
        filepath =QFileDialog::getExistingDirectory(this,
                                                    "打开目录",
                                                    filepath,
                                                    QFileDialog::ShowDirsOnly |
                                                    QFileDialog::DontResolveSymlinks);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_lineEdit_textChanged(const QString &str)
{
    filters = str.split(" ");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(filepath.isEmpty())
    {
        QMessageBox::information(this,"提示","请选择目录",QMessageBox::Ok);
        return;
    }
    if(filters.isEmpty())
    {
        QMessageBox::information(this,"提示","请指定要删除的目录名，\n请查看关于里面的使用教程",QMessageBox::Ok);
        ui->lineEdit->setFocus();
        return;
    }

    __clearPath(filepath);
    if(filePathList.isEmpty())
        return;
    QString str = "已删除的文件列表为：\n";
    for(QList<QString>::iterator it = filePathList.begin();it != filePathList.end();it++)
    {
        str += *it + "\n";
    }
    QMessageBox::information(this,"删除成功",str,QMessageBox::Ok|QMessageBox::Cancel);
    filePathList.clear();
    filepath = QString();
    ui->lineEdit->clear();
    filePathList.clear();
}

void MainWindow::__clearPath(QString filepath)
{
    QDir *dir = new QDir(filepath);
    QFileInfoList filelist = dir->entryInfoList(filters,QDir::Dirs);
    for(QFileInfoList::iterator it = filelist.begin();it != filelist.end();it++)
    {
        filePathList.append(it->filePath());
        if(!DeleteDirectory(it->filePath()))
        {
            QString errStr = "失败目录: ";
            errStr += filePathList.last() + "\n";
            QMessageBox::warning(this,
                                 "删除失败",
                                 errStr,
                                 QMessageBox::Ok|
                                 QMessageBox::Cancel);
            filePathList.pop_back();
            break;
        }
    }
    filelist.clear();

    dir->setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);
    filelist = dir->entryInfoList();
    for(QFileInfoList::iterator it = filelist.begin();it != filelist.end();it++)
    {
        __clearPath(it->filePath());
    }
    filelist.clear();
}

bool MainWindow::DeleteDirectory(const QString &path)
{
    if(path.isEmpty())
        return false;
    QDir qDir( path );
    if(!qDir.exists())
        return true;
    qDir.setFilter( QDir::AllEntries |
                    QDir::Dirs |
                    QDir::Files |
                    QDir::Readable |
                    QDir::Writable |
                    QDir::Hidden |
                    QDir::NoDotAndDotDot);
    QFileInfoList fileInfoLst = qDir.entryInfoList();
    foreach( QFileInfo qFileInfo, fileInfoLst )
    {
        if( qFileInfo.isFile() )
            qFileInfo.dir().remove( qFileInfo.fileName() );
        else
        {
            DeleteDirectory( qFileInfo.absoluteFilePath() );
        }
    }
    return qDir.rmpath( qDir.absolutePath() );
}

void MainWindow::on_action_2_triggered()
{
    About about;
    about.exec();
}

void MainWindow::on_action_triggered()
{
    Introduction w;
    w.exec();
}

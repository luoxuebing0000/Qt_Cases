#include "snakewidget.h"

SnakeWidget::SnakeWidget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(480,360);
    this->setWindowIcon(QIcon(":/new/prefix1/img/icon.ico"));
    this->setWindowTitle("贪吃蛇");
    QPalette palete;
    palete.setBrush(QPalette::Background,QBrush(QPixmap(":/new/prefix1/img/tcs.jpg").scaled(this->size())));//图片和缩放模式
    this->setPalette(palete);
    startBtn=new QPushButton(this);
    startBtn->setIcon(QIcon(":/new/prefix1/img/start.jpeg"));
    startBtn->setIconSize(QSize(80,80));
    startBtn->setGeometry(QRect(250,200,80,80));
    startBtn->setFlat(true);
    exitBtn=new QPushButton(this);
    exitBtn->setIcon(QIcon(":/new/prefix1/img/exit.png"));
    exitBtn->setIconSize(QSize(80,80));
    exitBtn->setGeometry(QRect(360,200,80,80));
    connect(startBtn,SIGNAL(clicked(bool)),this,SLOT(startBtnClicked()));
    connect(exitBtn,SIGNAL(clicked(bool)),this,SLOT(exitBtnClicked()));


}
void SnakeWidget::exitBtnClicked()
{
    QMessageBox megBox;
    megBox.addButton("是",QMessageBox::AcceptRole);
    megBox.addButton("否",QMessageBox::RejectRole);
    megBox.setText("退出游戏？");
   int ret= megBox.exec();
   switch(ret){
   case QMessageBox::AcceptRole:

       this->close();
       delete this;
       break;
   default:
       break;
      }


}
void SnakeWidget::startBtnClicked()
{
   // this->hide();
  // game=new GameWidget;//它将是一个独立的窗口
   game=new GameWidget(this);//它将是父窗口的一个子窗口，需要设置覆盖属性，否则会被父窗口覆盖

    game->show();
}
SnakeWidget::~SnakeWidget()
{
    delete startBtn;
    delete exitBtn;
}

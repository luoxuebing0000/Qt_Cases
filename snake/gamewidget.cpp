#include "gamewidget.h"
#define ROW 13
#define COL 13
#include <QDebug>

GameWidget::GameWidget(QWidget *parent) : QWidget(parent)
{
    this->setAutoFillBackground(true);
    this->resize(480,360);
    this->setWindowIcon(QIcon(":/new/prefix1/img/icon.ico"));
    this->setWindowTitle("贪吃蛇");
    QPalette palete;
    palete.setBrush(QPalette::Background,QBrush(QPixmap(":/new/prefix1/img/background.jpg").scaled(this->size())));//图片和缩放模式
    this->setPalette(palete);
    //按钮区
    upBtn=new QPushButton("up",this);
    upBtn->setGeometry(390,80,30,40);
    leftBtn=new QPushButton("left",this);
    leftBtn->setGeometry(340,120,40,30);
    rightBtn=new QPushButton("right",this);
    rightBtn->setGeometry(430,120,40,30);
    downBtn=new QPushButton("down",this);
    downBtn->setGeometry(390,130,30,40);
    startBtn=new QPushButton("开始",this);
    startBtn->setGeometry(340,200,60,30);
    returnBtn=new QPushButton("返回",this);
    returnBtn->setGeometry(410,200,60,30);
    connect(upBtn,SIGNAL(clicked(bool)),this,SLOT(upBtnClicked()));
    connect(leftBtn,SIGNAL(clicked(bool)),this,SLOT(leftBtnClicked()));
    connect(rightBtn,SIGNAL(clicked(bool)),this,SLOT(rightBtnClicked()));
    connect(downBtn,SIGNAL(clicked(bool)),this,SLOT(downBtnClicked()));
    connect(startBtn,SIGNAL(clicked(bool)),this,SLOT(startBtnClicked()));
    connect(returnBtn,SIGNAL(clicked(bool)),this,SLOT(returnBtnClicked()));
    snake[0][0]=qrand()%COL;
    snake[0][1]=qrand()%ROW;

    direction= qrand()%4;
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeOutSLot()));
    //食物
    foodx=qrand()%COL;
    foody=qrand()%ROW;




}
void GameWidget::upBtnClicked()
{
    direction=UP;

}
void GameWidget::leftBtnClicked()
{
    direction=LEFT;

}
void GameWidget::rightBtnClicked()
{
    direction=RIGHT;

}
void GameWidget::downBtnClicked()
{
    direction=DOWN;
}
void GameWidget::startBtnClicked()
{
    timer->start(500);

}
void GameWidget::returnBtnClicked()
{
    delete this;

}
void GameWidget::paintEvent(QPaintEvent *)
{
    qDebug()<<"repainter";
    QPainter painter(this);
    int i,j;
    for(i=0;i<ROW;i++)//行
    {
        for(j=0;j<COL;j++)//列
        {
            painter.drawRect(QRect(j*20,i*20,20,20));

        }
    }

     painter.drawImage(QRect(foodx*20,foody*20,20,20),QImage(":/new/prefix1/img/apple.jpg"));


    //随机产生蛇头位置，并加载不同的图片（这里只有一张）

    switch (direction) {
    case UP:
        painter.drawImage(QRectF(snake[0][0]*20,snake[0][1]*20,20,20),QImage(":/new/prefix1/img/move.png"));

        break;
    case DOWN:
        painter.drawImage(QRectF(snake[0][0]*20,snake[0][1]*20,20,20),QImage(":/new/prefix1/img/move.png"));
        break;
    case LEFT:
        painter.drawImage(QRectF(snake[0][0]*20,snake[0][1]*20,20,20),QImage(":/new/prefix1/img/move.png"));
        break;
    case RIGHT:
        painter.drawImage(QRectF(snake[0][0]*20,snake[0][1]*20,20,20),QImage(":/new/prefix1/img/move.png"));
        break;

    default:
        break;
    }
    //画蛇身
    for(i=1;i<=foodCount;i++)
    {
         switch (direction) {
         case UP:
         case LEFT:
             painter.drawImage(QRectF(snake[i][0]*20,snake[i][1]*20,20,20),QImage(":/new/prefix1/img/body.jpg"));
             break;
         case RIGHT:

         case DOWN:
            painter.drawImage(QRectF(snake[i][0]*20,snake[i][1]*20,20,20),QImage(":/new/prefix1/img/body.jpg"));
             break;
         default:
             break;




         }
    }

}
void GameWidget::timeOutSLot()
{
    if(snake[0][0]==foodx && snake[0][1]==foody)
    {
        //更新食物坐标，产生新食物

        foodx=qrand()%COL;
        foody=qrand()%ROW;
        foodCount++;


    }
    //改变蛇的坐标
    int i;
    for(i=foodCount;i>0;i--)
    {
        snake[i][0]=snake[i-1][0];
        snake[i][1]=snake[i-1][1];


    }
    qDebug()<<"run";
    switch (direction) {
    case UP:
        snake[0][1]--;
        break;
    case DOWN:
        snake[0][1]++;
        break;
    case LEFT:
        snake[0][0]--;
        break;
    case RIGHT:
        snake[0][0]++;
        break;
    default:
        break;
    }
    //判断是否自杀
    if(snake[0][0]<0||snake[0][0]>=COL||snake[0][1]<0||snake[0][1]>=ROW)
    {
        QMessageBox meg;
        meg.addButton("返回",QMessageBox::AcceptRole);
        meg.setText("Game Over");
        int ret=meg.exec();
        switch (ret) {
        case QMessageBox::AcceptRole:
            delete this;
            break;
        default:
            break;
        }

    }
    this->update();

}



#include "chessform.h"
#include "ui_chessform.h"
#include <QDebug>

ChessForm::ChessForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChessForm)
{
    ui->setupUi(this);
    this->Init();
}

ChessForm::~ChessForm()
{
    delete ui;
}

void ChessForm::Init()
{
    QStringList array;
    array.append(tr("白子先"));
    array.append(tr("黑子先"));
    ui->comboBox_item->addItems(array);

    ui->lbl1->setPixmap(QPixmap(":/imgs/white.png"));
    ui->lbl1->setScaledContents(true);

    ui->lbl2->setPixmap(QPixmap(":/imgs/black.png"));
    ui->lbl2->setScaledContents(true);


    // 申请棋盘类空间
    myChess = new Chess;
    // 把棋盘显示在当前容器中
    //ui->gridLayout_2->addWidget(myChess);
    ui->gridLayout->addWidget(myChess);
}

int judgeRule(int x,int y,void *chess,Chess::ChessType currentRole,bool eatChess)
{
    return 0;
}

void ChessForm::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/imgs/border.jpg"));
}

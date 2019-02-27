#include "mainwidget.h"
#include <QDoubleValidator>
#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(270,400);
    this->setWindowTitle("计算器     QQ群：271251545");
    this->setWindowIcon(QIcon(":/new/prefix1/img/title.jpg"));
    this->setWindowFlags(Qt::WindowMinimizeButtonHint|Qt::WindowCloseButtonHint);
    init=0;
    temp=0;
    doSomeThing=false;
    //实例化各个子控件
    lineEdit=new QLineEdit;
    lineEdit->setText("0");
    lineEdit->setAlignment(Qt::AlignRight);
    QDoubleValidator *val=new QDoubleValidator;
    lineEdit->setValidator(val);//设置只能输入数字
    Btn0=new QPushButton("0");
    Btn1=new QPushButton("1");
    Btn2=new QPushButton("2");
    Btn3=new QPushButton("3");
    Btn4=new QPushButton("4");
    Btn5=new QPushButton("5");
    Btn6=new QPushButton("6");
    Btn7=new QPushButton("7");
    Btn8=new QPushButton("8");
    Btn9=new QPushButton("9");
    Btnplus=new QPushButton("+");
    Btndecrease=new QPushButton("-");
    Btncheng=new QPushButton("*");
    Btnchu=new QPushButton("/");
    BtnCE=new QPushButton("CE");
    BtnC=new QPushButton("C");
    Btnpoint=new QPushButton(".");
    Btnequal=new QPushButton("=");
    Btndelete=new QPushButton("删除");
    this->setStyleSheet( "QPushButton{ min-width: 45px; max-width: 45px; min-height: 45px;  max-height: 45px;}");
    //两个布局，一个主布局，一个按钮布局
    mainLayout=new QVBoxLayout(this);
    btnLayout=new QGridLayout;
    btnLayout->addWidget(BtnCE,0,1);
    btnLayout->addWidget(BtnC,0,2);
    btnLayout->addWidget(Btndelete,0,3);
    btnLayout->addWidget(Btnplus,0,4);
    btnLayout->addWidget(Btn7,1,1);
    btnLayout->addWidget(Btn8,1,2);
    btnLayout->addWidget(Btn9,1,3);
    btnLayout->addWidget(Btndecrease,1,4);
    btnLayout->addWidget(Btn4,2,1);
    btnLayout->addWidget(Btn5,2,2);
    btnLayout->addWidget(Btn6,2,3);
    btnLayout->addWidget(Btncheng,2,4);
    btnLayout->addWidget(Btn1,3,1);
    btnLayout->addWidget(Btn2,3,2);
    btnLayout->addWidget(Btn3,3,3);
    btnLayout->addWidget(Btnchu,3,4);
    btnLayout->addWidget(Btn0,4,1);
    btnLayout->addWidget(Btnpoint,4,2);
    btnLayout->addWidget(Btnequal,4,3);
    btnLayout->setSpacing(10);
    btnLayout->setMargin(10);
    mainLayout->addWidget(lineEdit,1);
    mainLayout->addLayout(btnLayout);
    //信号槽连接
    connect(BtnCE,SIGNAL(clicked(bool)),this,SLOT(BtnCEClicked()));
    connect(BtnC,SIGNAL(clicked(bool)),this,SLOT(BtnCClicked()));
    connect(Btn0,SIGNAL(clicked(bool)),this,SLOT(Btn0Clicked()));
    connect(Btn1,SIGNAL(clicked(bool)),this,SLOT(Btn1Clicked()));
    connect(Btn2,SIGNAL(clicked(bool)),this,SLOT(Btn2Clicked()));
    connect(Btn3,SIGNAL(clicked(bool)),this,SLOT(Btn3Clicked()));
    connect(Btn4,SIGNAL(clicked(bool)),this,SLOT(Btn4Clicked()));
    connect(Btn5,SIGNAL(clicked(bool)),this,SLOT(Btn5Clicked()));
    connect(Btn6,SIGNAL(clicked(bool)),this,SLOT(Btn6Clicked()));
    connect(Btn7,SIGNAL(clicked(bool)),this,SLOT(Btn7Clicked()));
    connect(Btn8,SIGNAL(clicked(bool)),this,SLOT(Btn8Clicked()));
    connect(Btn9,SIGNAL(clicked(bool)),this,SLOT(Btn9Clicked()));
    connect(Btnplus,SIGNAL(clicked(bool)),this,SLOT(BtnplusClicked()));
    connect(Btndecrease,SIGNAL(clicked(bool)),this,SLOT(BtndecreaseClicked()));
    connect(Btnequal,SIGNAL(clicked(bool)),this,SLOT(BtnequalClicked()));
    connect(Btncheng,SIGNAL(clicked(bool)),this,SLOT(BtnchengClicked()));
    connect(Btnchu,SIGNAL(clicked(bool)),this,SLOT(BtnchuClicked()));





}

void MainWidget::BtnCEClicked()//用于纠错
{

    lineEdit->clear();
    lineEdit->setText("0");
}
void MainWidget::BtnCClicked()//清零
{
    doSomeThing=false;
    plus=false;
    decrease=false;
    cheng=false;
    chu=false;
    init=0;
    temp=0;
    lineEdit->setText("0");
}
void MainWidget::Btn0Clicked()
{
    if(chu==true)
    {
        QMessageBox::warning(this,"低级错误",QString("假设你有5个苹果，怎么分给0个小朋友呢？"),QMessageBox::Cancel);
    }
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("0");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn0->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn0->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}
void MainWidget::Btn1Clicked()
{

    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("1");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn1->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn1->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}
void MainWidget::Btn2Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("2");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn2->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn2->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}
void MainWidget::Btn3Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("3");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn3->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn3->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}
void MainWidget::Btn4Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("4");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn4->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn4->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}

void MainWidget::Btn5Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("5");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn5->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn5->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}

void MainWidget::Btn6Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("6");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn6->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn6->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}

void MainWidget::Btn7Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("7");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn7->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn7->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}

void MainWidget::Btn8Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("8");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn8->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn8->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
}

void MainWidget::Btn9Clicked()
{
    if(lineEdit->text()=="0")
    {
        lineEdit->clear();
        lineEdit->setText("9");
    }
    else if(doSomeThing){
        lineEdit->clear();
        QString str=lineEdit->text().append(Btn9->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }
    else
    {
        QString str=lineEdit->text().append(Btn9->text());
        lineEdit->setText(str);
        doSomeThing=false;
    }

}

void MainWidget::BtnplusClicked()
{
    if(doSomeThing==false)
    {
    doSomeThing=true;
    init=lineEdit->text().toDouble();

    plus=true;
    decrease=false;
    cheng=false;
    chu=false;

    }
    else {
        plus=true;
        decrease=false;
        cheng=false;
        chu=false;
    }


}

void MainWidget::BtndecreaseClicked()
{
    if(doSomeThing==false)//如果没有点击过运算按钮，说明init没有记录信息
    {
        doSomeThing=true;
        init=lineEdit->text().toDouble();
        lineEdit->clear();
        decrease=true;
        plus=false;
        cheng=false;
        chu=false;
    }
    else {//如果点击过运算按钮，说明init已经记录了信息，我们只需要告诉程序接下来执行的算法即可
        decrease=true;
        plus=false;
        cheng=false;
        chu=false;
    }
}

void MainWidget::BtnchengClicked()
{
    if(doSomeThing==false)
    {
    doSomeThing=true;
    init=lineEdit->text().toDouble();
    lineEdit->clear();
    plus=false;
    decrease=false;
    cheng=true;
    chu=false;

    }
    else {
        plus=false;
        decrease=false;
        cheng=true;
        chu=false;
    }
}

void MainWidget::BtnchuClicked()
{
    if(doSomeThing==false)
    {
    doSomeThing=true;
    init=lineEdit->text().toDouble();
    lineEdit->clear();
    plus=false;
    decrease=false;
    cheng=false;
    chu=true;

    }
    else {
        plus=false;
        decrease=false;
        cheng=false;
        chu=true;
    }
}

void MainWidget::BtnequalClicked()
{
    temp=lineEdit->text().toDouble();
    if(plus==true&&decrease==false&&cheng==false&&chu==false)
    {
    result=init+temp;
    lineEdit->setText(QString::number(result));
    }
    else if(decrease==true&&plus==false&&cheng==false&&chu==false)
    {
        result=init-temp;
        lineEdit->setText(QString::number(result));
    }
    else if (cheng==true) {
        result=init*temp;
        lineEdit->setText(QString::number(result));
    }
    else if(chu==true)
    {
        result=init/temp;
        lineEdit->setText(QString::number(result));
    }
    equlaClicked=true;
}

MainWidget::~MainWidget()
{

}

#include "calculator.h"
#include "ui_calculator.h"
#include <QFileDialog>
#include <QCryptographicHash>
#include <QFile>
#include <QByteArray>
#include <QFileInfo>
Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_B_Open_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,
            tr("选择要计算的文件"),
            "",
            "",
         0);
    ui->T_Path->setText(filename);
}
void Calculator::on_B_Calculator_clicked()
{
    QString path=ui->T_Path->text();
    QFile *myfile=new QFile(path);
    myfile->open(QIODevice::ReadOnly);
    QCryptographicHash md(QCryptographicHash::Md5);
    QString md5;
    QByteArray bb;
    bb = QCryptographicHash::hash(myfile->readAll(),QCryptographicHash::Md5 );
    md5.append(bb.toHex());
    md5.toStdString();
    myfile->close();
    ui->T_Path->setText(md5);
}

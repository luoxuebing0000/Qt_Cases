#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    loadfile();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString FindStr = ui->lineEdit->text();

    bool ok = ui->textEdit->find(FindStr,QTextDocument::FindWholeWords);
    if(!ok)
    {
        qDebug()<<"no find "<<FindStr;
        QMessageBox::information(this,"Find ","noFind\t"+FindStr);
        return;
    }
    QMessageBox::information(this,"Find","find\t"+FindStr);

}

void Dialog::loadfile()
{
   QFile FileName(":/GS.txt");

  bool ok = FileName.open(QIODevice::ReadOnly |QIODevice::Text);
  if(!ok)
  {
      qDebug()<<"Open file Error";
      QMessageBox::information(this,"Error","Open file Error");
      return;
  }
  QTextStream a(&FileName);
  ui->textEdit->setPlainText(a.readAll());
}

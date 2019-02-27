#include "about.h"
#include "ui_about.h"

#include <QTextEdit>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    QTextEdit text;
    text.toPlainText();
}

About::~About()
{
    delete ui;
}

void About::on_buttonBox_accepted()
{

}

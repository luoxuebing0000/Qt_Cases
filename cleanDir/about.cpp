#include "about.h"


About::About(QWidget *parent):QDialog (parent),ui(new Ui::About)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}

#include "introduction.h"

Introduction::Introduction(QWidget *parent):QDialog (parent),ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

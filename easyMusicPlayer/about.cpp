#include "about.h"
#include <QLabel>
#include <QGridLayout>

about::about(QWidget *parent) : QDialog(parent)
{
    QLabel *aboutLabel=new QLabel;
    aboutLabel->setText("Made By luoxuebing");
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    mainLayout->addWidget(aboutLabel,Qt::AlignCenter);


}


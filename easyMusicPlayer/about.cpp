#include "about.h"
#include <QLabel>
#include <QGridLayout>

about::about(QWidget *parent) : QDialog(parent)
{
    QLabel *aboutLabel=new QLabel;
    aboutLabel->setText("小黑版本QT音乐播放器");
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    mainLayout->addWidget(aboutLabel,Qt::AlignCenter);


}


#ifndef ABOUT_H
#define ABOUT_H
#include <QDialog>
#include "ui_about.h"

namespace Ui {
class About;
}

class About:public QDialog
{
public:
    About(QWidget *parent = nullptr);
private:
    Ui::About *ui;
};

#endif // ABOUT_H

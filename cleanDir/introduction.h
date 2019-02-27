#ifndef INTRODUCTION_H
#define INTRODUCTION_H
#include <QDialog>
#include "ui_introduction.h"

namespace Ui
{
class Dialog;
}

class Introduction:public QDialog
{
public:
    Introduction(QWidget *parent = nullptr);
private:
    Ui::Dialog *ui;
};

#endif // INTRODUCTION_H

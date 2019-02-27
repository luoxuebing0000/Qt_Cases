#ifndef SNAKEWIDGET_H
#define SNAKEWIDGET_H

#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QPixmap>
#include <QPushButton>
#include <QMessageBox>
#include "gamewidget.h"




class SnakeWidget : public QWidget
{
    Q_OBJECT

public:
    SnakeWidget(QWidget *parent = 0);
    ~SnakeWidget();
private:
    QPushButton *startBtn;
    QPushButton *exitBtn;
     GameWidget *game;
public slots:
    void startBtnClicked();
    void exitBtnClicked();
};

#endif // SNAKEWIDGET_H

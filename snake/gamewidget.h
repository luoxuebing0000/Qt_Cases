#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include <QPalette>
#include <QIcon>
#include <QPushButton>
#include <QPainter>
#include <QRect>
#include <QTimer>
#include <QMessageBox>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GameWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
private:
    QPushButton *leftBtn;
    QPushButton *rightBtn;
    QPushButton *upBtn;
    QPushButton *downBtn;
    QPushButton *startBtn;
    QPushButton *returnBtn;
    int direction;
    int x,y;
    QTimer *timer;
    int snake[100][2];//保存蛇各个位置的坐标
    //画食物
    int foodx;
    int foody;
    int foodCount;

signals:

public slots:
    void leftBtnClicked();
    void rightBtnClicked();
    void upBtnClicked();
    void downBtnClicked();
    void startBtnClicked();
    void returnBtnClicked();
    void timeOutSLot();
};

#endif // GAMEWIDGET_H

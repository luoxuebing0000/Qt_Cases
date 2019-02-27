#ifndef CHESS_H
#define CHESS_H

#include <QWidget>
#include <QPaintEvent>
#include <QColor>
#include <QPen>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QPoint>
#include <QResizeEvent>
#include <QMouseEvent>

#define GRIDCOUNT 10;

class Chess : public QWidget
{
    Q_OBJECT
public:
    // 棋子类型
    enum ChessType{Empty=0,White,Black};
public:
    explicit Chess(QWidget *parent = nullptr);
    void setBGImage(const QString &filename);
    void setLine(const QColor &color = Qt::red,const Qt::PenStyle &style = Qt::SolidLine,const int &width = 3);
    // 改变棋盘的值
    void setChessStatus(void *p);
protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
    void mousePressEvent(QMouseEvent *);
private:
    void Init();
    // 初始化棋牌
    void InitChess();

signals:
    void SignalSendChessData(int i,int j);
public slots:

private:
    QString bgFileName;
    QColor lineColor;
    Qt::PenStyle lineStyle;
    // 线的粗细
    int lineWidth;
    // 格子宽高，画线起始点
    int gridWidth,gridHeight,startX,startY;
    // 保存棋子数据的容器
    int chessData[8][8];
};

#endif // CHESS_H

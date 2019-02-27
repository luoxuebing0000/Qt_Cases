#include "chess.h"
#include <memory.h>

#include <QDebug>
Chess::Chess(QWidget *parent) : QWidget(parent)
{
    // 初始化
    Init();
    InitChess();
}

void Chess::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    // 画背景
    QRect rect(QPoint(0,0),QPoint(this->width(),this->height()));
    QPixmap pixmap;
    pixmap.load(this->bgFileName);
    painter.drawPixmap(rect,pixmap);

    // 画线
    QPen pen;
    pen.setColor(this->lineColor);
    pen.setStyle(this->lineStyle);
    pen.setWidth(this->lineWidth);

    painter.setPen(pen);
    int gridCounts = GRIDCOUNT;
    for(int i = 0;i< gridCounts-1;i++)
    {
        painter.drawLine(startX,startY+i*gridHeight,(gridCounts-1)*gridWidth,startY+i*gridHeight);
        painter.drawLine(startX+i*gridWidth,startY,startX+i*gridWidth,(gridCounts-1)*gridHeight);
    }

    // 画棋子
    QString chessFileName;
    for(int i =0;i<gridCounts-2;i++)
    {
        for(int j = 0;j<gridCounts-2;j++)
        {
            if(chessData[i][j] == Chess::White)
            {
                chessFileName = ":/imgs/white.png";
            }
            else if(chessData[i][j] == Chess::Black)
            {
               chessFileName = ":/imgs/black.png";
            }
            else
            {
                chessFileName.clear();
                continue;
            }
            painter.drawPixmap(startX+i*gridWidth,startY+j*gridHeight,gridWidth,gridHeight,chessFileName);
        }
    }
}

void Chess::resizeEvent(QResizeEvent *event)
{
    gridWidth = event->size().width() / GRIDCOUNT;
    gridHeight = event->size().height() / GRIDCOUNT;
    startX = gridWidth;
    startY = gridHeight;
}

void Chess::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();
    // x
    if(x >= startX && (x <= startX+8*gridWidth))
    {
        // y
        if(y >= startY && (y <= startY+8*gridHeight))
        {
            // 得出当前坐标属于哪个格子
            int i = 0,j = 0;
            i = (x-startX)/gridWidth;
            j = (y-startY)/gridHeight;
            SignalSendChessData(i,j);
        }
    }
}

void Chess::Init()
{
    this->bgFileName.clear();
    this->bgFileName = ":/imgs/background.jpg";
    this->lineColor = Qt::red;
    this->lineStyle = Qt::SolidLine;
    this->lineWidth = 3;
}

void Chess::InitChess()
{
    memset(chessData,0,64*8);
    chessData[3][3] = Chess::Black;
    chessData[4][3] = Chess::White;
    chessData[3][4] = Chess::White;
    chessData[4][4] = Chess::Black;
}

void Chess::setBGImage(const QString &filename)
{
    this->bgFileName = filename;
    this->update();
}

void Chess::setLine(const QColor &color, const Qt::PenStyle &style, const int &width)
{
    this->lineColor = color;
    this->lineStyle = style;
    this->lineWidth = width;
    this->update();
}

void Chess::setChessStatus(void *p)
{
    memcpy(chessData,p,sizeof(int)*8*8);
    this->update();
}

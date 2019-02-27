#ifndef CHESSFORM_H
#define CHESSFORM_H

#include <QWidget>
#include "chess.h"

namespace Ui {
class ChessForm;
}

class ChessForm : public QWidget
{
    Q_OBJECT

public:
    explicit ChessForm(QWidget *parent = nullptr);
    ~ChessForm();

protected:
    void paintEvent(QPaintEvent *);

private:
    void Init();
    int judgeRule(int x,int y,void *chess,Chess::ChessType currentRole,bool eatChess);
private:
    Ui::ChessForm *ui;
    Chess *myChess;
};

#endif // CHESSFORM_H

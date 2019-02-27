#include <QApplication>
#include "chessform.h"

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    ChessForm c;
    c.show();
    return app.exec();
}

#include <QApplication>
#include "mainwindow.h"
#include <QTranslator>
#include <QDebug>

int main(int argv,char **argc)
{
    QApplication app(argv,argc);
//    QTranslator translator;
//    if(translator.load(":/translate/translate.qm","."))
//    {
//        qDebug() <<"jfkldsjflksd";
//    }


//    app.installTranslator(&translator);


    MainWindow w;
    w.show();

    return app.exec();
}

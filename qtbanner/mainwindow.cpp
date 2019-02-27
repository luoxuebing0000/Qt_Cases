#include "mainwindow.h"
#include "fancybanner.h"
#include <QStackedLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    FancyBanner *banner = new FancyBanner();
    for(int i = 0; i < 10; i++){
        banner->addPage(QPixmap(QString(":/main/%1").arg(i)));
    }
    setCentralWidget(banner);
//    banner->setDelayTime(2000, true);

    resize(300, 80);
}

MainWindow::~MainWindow()
{

}

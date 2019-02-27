#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMaximumSize(QSize(531,250));
    this->setMinimumSize(QSize(531,250));
    QObject::connect(ui->cmmondLineEdit,SIGNAL(returnPressed()),this,SLOT(on_okBtn_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_okBtn_clicked()
{
    QProcess *process = new QProcess;
    process->start(ui->cmmondLineEdit->text().trimmed());
    this->close();
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QList>
#include <QStringList>

namespace Ui {
class MainWindow;
}

class MainWindow:public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged(const QString &str);

    void on_pushButton_2_clicked();

    void on_action_2_triggered();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    QString filepath;
    QList<QString> filePathList;
    QStringList filters;

private:
    void __clearPath(QString filepath);
    bool DeleteDirectory(const QString &path);
};

#endif // MAINWINDOW_H

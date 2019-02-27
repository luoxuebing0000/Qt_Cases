#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFile>
#include <QIODevice>
#include <QTextEdit>
#include <QMessageBox>
#include <QDebug>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    void loadfile();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class Calculator;
}

class Calculator : public QDialog
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_B_Open_clicked();

    void on_B_Calculator_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H

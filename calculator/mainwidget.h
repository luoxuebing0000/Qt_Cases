#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QValidator>
#include <QVBoxLayout>
#include <QGridLayout>

class MainWidget : public QWidget
{
    Q_OBJECT
protected:
    QLineEdit *lineEdit;
    QPushButton *Btn0;
    QPushButton *Btn1;
    QPushButton *Btn2;
    QPushButton *Btn3;
    QPushButton *Btn4;
    QPushButton *Btn5;
    QPushButton *Btn6;
    QPushButton *Btn7;
    QPushButton *Btn8;
    QPushButton *Btn9;
    QPushButton *Btnplus;
    QPushButton *Btndecrease;
    QPushButton *Btncheng;
    QPushButton *Btnchu;
    QPushButton *BtnCE;
    QPushButton *BtnC;
    QPushButton *Btndelete;
    QPushButton *Btnequal;
    QPushButton *Btnpoint;
    QGridLayout *btnLayout;
    QVBoxLayout *mainLayout;
    double init;
    double temp;
    double result;
    bool doSomeThing;
    bool plus;
    bool decrease;
    bool cheng;
    bool chu;
    bool equlaClicked;

public slots:

    void BtnCEClicked();
    void BtnCClicked();
    void Btn0Clicked();
    void Btn1Clicked();
    void Btn2Clicked();
    void Btn3Clicked();
    void Btn4Clicked();
    void Btn5Clicked();
    void Btn6Clicked();
    void Btn7Clicked();
    void Btn8Clicked();
    void Btn9Clicked();
    void BtnplusClicked();
    void BtndecreaseClicked();
    void BtnchengClicked();
    void BtnchuClicked();
    void BtnequalClicked();




public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
};

#endif // MAINWIDGET_H

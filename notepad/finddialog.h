#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class findDialog : public QDialog
{
    Q_OBJECT
public:
    explicit findDialog(QWidget *parent = nullptr);
    ~findDialog();
private slots:
    void on_AdvOption_clicked();

    void on_AdvOption_toggled(bool checked);

    void on_findBtn_clicked();

    void on_replaceBtn_clicked();

    void on_AdvSearchBtn_clicked();

    void on_AdvOption_2_clicked(bool checked);

private:
    Ui::Dialog *ui;
};

#endif // FINDDIALOG_H

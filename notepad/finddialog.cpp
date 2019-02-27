#include "finddialog.h"
#include "ui_finddialog.h"

findDialog::findDialog(QWidget *parent):QDialog(parent),ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->findPage->setCurrentIndex(0);
    ui->label_3->hide();
    ui->advFindRadio1->hide();
    ui->advFindRadio2->hide();
    ui->advFindRadio3->hide();
    ui->findcheckBox1->hide();
    ui->findcheckBox2->hide();
}


findDialog::~findDialog()
{
    delete ui;
}

void findDialog::on_AdvOption_clicked()
{

}

void findDialog::on_AdvOption_toggled(bool checked)
{
    if(checked == true)
    {
        ui->label_3->show();
        ui->advFindRadio1->show();
        ui->advFindRadio2->show();
        ui->advFindRadio3->show();
        ui->findcheckBox1->show();
        ui->findcheckBox2->show();
    }
    else
    {
        ui->label_3->hide();
        ui->advFindRadio1->hide();
        ui->advFindRadio2->hide();
        ui->advFindRadio3->hide();
        ui->findcheckBox1->hide();
        ui->findcheckBox2->hide();
    }

}

void findDialog::on_findBtn_clicked()
{
    if(ui->AdvOption->checkState() == Qt::Checked)
    {
        ui->label_3->show();
        ui->advFindRadio1->show();
        ui->advFindRadio2->show();
        ui->advFindRadio3->show();
        ui->findcheckBox1->show();
        ui->findcheckBox2->show();
    }
    else
    {
        ui->label_3->hide();
        ui->advFindRadio1->hide();
        ui->advFindRadio2->hide();
        ui->advFindRadio3->hide();
        ui->findcheckBox1->hide();
        ui->findcheckBox2->hide();
    }
    ui->findPage->setCurrentIndex(0);

}

void findDialog::on_replaceBtn_clicked()
{
    if(ui->AdvOption_2->checkState() == Qt::Checked)
    {
        ui->label_4->show();
        ui->advFindRadio2_2->show();
        ui->advFindRadio3_2->show();
        ui->advFindRadio1_2->show();
        ui->findcheckBox1_2->show();
        ui->findcheckBox2_2->show();
    }
    else
    {
        ui->label_4->hide();
        ui->advFindRadio2_2->hide();
        ui->advFindRadio3_2->hide();
        ui->advFindRadio1_2->hide();
        ui->findcheckBox1_2->hide();
        ui->findcheckBox2_2->hide();
    }
    ui->findPage->setCurrentIndex(1);
}

void findDialog::on_AdvSearchBtn_clicked()
{
    ui->findPage->setCurrentIndex(2);
}

void findDialog::on_AdvOption_2_clicked(bool checked)
{
    if(checked)
    {
        ui->label_4->show();
        ui->advFindRadio2_2->show();
        ui->advFindRadio3_2->show();
        ui->advFindRadio1_2->show();
        ui->findcheckBox1_2->show();
        ui->findcheckBox2_2->show();
    }
    else
    {
        ui->label_4->hide();
        ui->advFindRadio2_2->hide();
        ui->advFindRadio3_2->hide();
        ui->advFindRadio1_2->hide();
        ui->findcheckBox1_2->hide();
        ui->findcheckBox2_2->hide();
    }
}

/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *findPage;
    QWidget *page_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *advFindRadio3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *findcheckBox1;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *advFindRadio2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *findLineEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *advFindRadio1;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *findcheckBox2;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout;
    QCheckBox *AdvOption;
    QLabel *label_3;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *advFindRadio1_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *findcheckBox2_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *AdvOption_2;
    QLabel *label_4;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *replaceFindLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QLineEdit *replaceLIneEdit;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QRadioButton *advFindRadio2_2;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_11;
    QRadioButton *advFindRadio3_2;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *findcheckBox1_2;
    QWidget *page_3;
    QLabel *label_6;
    QWidget *layoutWidget13;
    QHBoxLayout *horizontalLayout;
    QPushButton *findBtn;
    QPushButton *replaceBtn;
    QPushButton *AdvSearchBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(520, 440);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(520, 200));
        Dialog->setMaximumSize(QSize(520, 440));
        findPage = new QStackedWidget(Dialog);
        findPage->setObjectName(QStringLiteral("findPage"));
        findPage->setGeometry(QRect(0, 40, 520, 411));
        sizePolicy.setHeightForWidth(findPage->sizePolicy().hasHeightForWidth());
        findPage->setSizePolicy(sizePolicy);
        findPage->setMinimumSize(QSize(520, 0));
        findPage->setMaximumSize(QSize(16777215, 520));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 200, 277, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        advFindRadio3 = new QRadioButton(layoutWidget);
        advFindRadio3->setObjectName(QStringLiteral("advFindRadio3"));

        horizontalLayout_5->addWidget(advFindRadio3);

        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 230, 178, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        findcheckBox1 = new QCheckBox(layoutWidget1);
        findcheckBox1->setObjectName(QStringLiteral("findcheckBox1"));

        horizontalLayout_6->addWidget(findcheckBox1);

        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 170, 289, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        advFindRadio2 = new QRadioButton(layoutWidget2);
        advFindRadio2->setObjectName(QStringLiteral("advFindRadio2"));

        horizontalLayout_4->addWidget(advFindRadio2);

        layoutWidget3 = new QWidget(page_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 419, 38));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(13);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        findLineEdit = new QLineEdit(layoutWidget3);
        findLineEdit->setObjectName(QStringLiteral("findLineEdit"));
        sizePolicy1.setHeightForWidth(findLineEdit->sizePolicy().hasHeightForWidth());
        findLineEdit->setSizePolicy(sizePolicy1);
        findLineEdit->setMinimumSize(QSize(360, 36));

        horizontalLayout_2->addWidget(findLineEdit);

        layoutWidget4 = new QWidget(page_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 140, 187, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        advFindRadio1 = new QRadioButton(layoutWidget4);
        advFindRadio1->setObjectName(QStringLiteral("advFindRadio1"));

        horizontalLayout_3->addWidget(advFindRadio1);

        layoutWidget5 = new QWidget(page_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 260, 133, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        findcheckBox2 = new QCheckBox(layoutWidget5);
        findcheckBox2->setObjectName(QStringLiteral("findcheckBox2"));

        horizontalLayout_7->addWidget(findcheckBox2);

        layoutWidget6 = new QWidget(page_2);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 70, 122, 61));
        verticalLayout = new QVBoxLayout(layoutWidget6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AdvOption = new QCheckBox(layoutWidget6);
        AdvOption->setObjectName(QStringLiteral("AdvOption"));
        sizePolicy1.setHeightForWidth(AdvOption->sizePolicy().hasHeightForWidth());
        AdvOption->setSizePolicy(sizePolicy1);
        AdvOption->setMinimumSize(QSize(120, 30));

        verticalLayout->addWidget(AdvOption);

        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget7 = new QWidget(page_2);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(251, 331, 254, 33));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget7);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget7);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);

        horizontalLayout_8->addWidget(pushButton_3);

        findPage->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget_2 = new QWidget(page);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 230, 187, 25));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        advFindRadio1_2 = new QRadioButton(layoutWidget_2);
        advFindRadio1_2->setObjectName(QStringLiteral("advFindRadio1_2"));

        horizontalLayout_10->addWidget(advFindRadio1_2);

        layoutWidget_3 = new QWidget(page);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 290, 133, 31));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        findcheckBox2_2 = new QCheckBox(layoutWidget_3);
        findcheckBox2_2->setObjectName(QStringLiteral("findcheckBox2_2"));

        horizontalLayout_11->addWidget(findcheckBox2_2);

        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 330, 89, 25));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 330, 89, 25));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 330, 89, 25));
        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 370, 89, 25));
        pushButton_8 = new QPushButton(page);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(270, 370, 89, 25));
        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 370, 89, 25));
        layoutWidget8 = new QWidget(page);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 90, 122, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget8);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AdvOption_2 = new QCheckBox(layoutWidget8);
        AdvOption_2->setObjectName(QStringLiteral("AdvOption_2"));
        sizePolicy1.setHeightForWidth(AdvOption_2->sizePolicy().hasHeightForWidth());
        AdvOption_2->setSizePolicy(sizePolicy1);
        AdvOption_2->setMinimumSize(QSize(120, 30));

        verticalLayout_2->addWidget(AdvOption_2);

        label_4 = new QLabel(layoutWidget8);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        layoutWidget9 = new QWidget(page);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 0, 421, 84));
        verticalLayout_3 = new QVBoxLayout(layoutWidget9);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(layoutWidget9);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout_9->addWidget(label_2);

        replaceFindLineEdit = new QLineEdit(layoutWidget9);
        replaceFindLineEdit->setObjectName(QStringLiteral("replaceFindLineEdit"));
        sizePolicy1.setHeightForWidth(replaceFindLineEdit->sizePolicy().hasHeightForWidth());
        replaceFindLineEdit->setSizePolicy(sizePolicy1);
        replaceFindLineEdit->setMinimumSize(QSize(360, 36));

        horizontalLayout_9->addWidget(replaceFindLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_5 = new QLabel(layoutWidget9);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_12->addWidget(label_5);

        replaceLIneEdit = new QLineEdit(layoutWidget9);
        replaceLIneEdit->setObjectName(QStringLiteral("replaceLIneEdit"));
        sizePolicy1.setHeightForWidth(replaceLIneEdit->sizePolicy().hasHeightForWidth());
        replaceLIneEdit->setSizePolicy(sizePolicy1);
        replaceLIneEdit->setMinimumSize(QSize(360, 36));

        horizontalLayout_12->addWidget(replaceLIneEdit);


        verticalLayout_3->addLayout(horizontalLayout_12);

        layoutWidget10 = new QWidget(page);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(0, 170, 289, 25));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        advFindRadio2_2 = new QRadioButton(layoutWidget10);
        advFindRadio2_2->setObjectName(QStringLiteral("advFindRadio2_2"));

        horizontalLayout_13->addWidget(advFindRadio2_2);

        layoutWidget11 = new QWidget(page);
        layoutWidget11->setObjectName(QStringLiteral("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(0, 200, 277, 25));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        advFindRadio3_2 = new QRadioButton(layoutWidget11);
        advFindRadio3_2->setObjectName(QStringLiteral("advFindRadio3_2"));

        horizontalLayout_14->addWidget(advFindRadio3_2);

        layoutWidget12 = new QWidget(page);
        layoutWidget12->setObjectName(QStringLiteral("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(0, 260, 178, 31));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        findcheckBox1_2 = new QCheckBox(layoutWidget12);
        findcheckBox1_2->setObjectName(QStringLiteral("findcheckBox1_2"));

        horizontalLayout_15->addWidget(findcheckBox1_2);

        findPage->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 130, 221, 101));
        QFont font1;
        font1.setPointSize(40);
        label_6->setFont(font1);
        findPage->addWidget(page_3);
        layoutWidget13 = new QWidget(Dialog);
        layoutWidget13->setObjectName(QStringLiteral("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(0, 0, 482, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget13);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        findBtn = new QPushButton(layoutWidget13);
        findBtn->setObjectName(QStringLiteral("findBtn"));

        horizontalLayout->addWidget(findBtn);

        replaceBtn = new QPushButton(layoutWidget13);
        replaceBtn->setObjectName(QStringLiteral("replaceBtn"));

        horizontalLayout->addWidget(replaceBtn);

        AdvSearchBtn = new QPushButton(layoutWidget13);
        AdvSearchBtn->setObjectName(QStringLiteral("AdvSearchBtn"));
        AdvSearchBtn->setMinimumSize(QSize(100, 0));
        QFont font2;
        font2.setPointSize(12);
        AdvSearchBtn->setFont(font2);

        horizontalLayout->addWidget(AdvSearchBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        retranslateUi(Dialog);

        findPage->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\220\234\347\264\242", nullptr));
        advFindRadio3->setText(QApplication::translate("Dialog", "Search &with special characters", nullptr));
        findcheckBox1->setText(QApplication::translate("Dialog", "\344\273\205\345\214\271\351\205\215\345\256\214\346\225\264\345\255\227\350\257\215", nullptr));
        advFindRadio2->setText(QApplication::translate("Dialog", "Search with &regular expressions", nullptr));
        label->setText(QApplication::translate("Dialog", "\346\237\245\346\211\276\357\274\232", nullptr));
        advFindRadio1->setText(QApplication::translate("Dialog", "Search &plain text", nullptr));
        findcheckBox2->setText(QApplication::translate("Dialog", "\345\214\271\351\205\215\345\256\236\344\276\213", nullptr));
        AdvOption->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\351\253\230\347\272\247", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\345\220\221\344\270\212\346\237\245\346\211\276", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "\345\220\221\344\270\213\346\237\245\346\211\276", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "\345\205\250\351\203\250\351\200\211\346\213\251", nullptr));
        advFindRadio1_2->setText(QApplication::translate("Dialog", "Search &plain text", nullptr));
        findcheckBox2_2->setText(QApplication::translate("Dialog", "\345\214\271\351\205\215\345\256\236\344\276\213", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "\345\220\221\344\270\212\346\237\245\346\211\276", nullptr));
        pushButton_5->setText(QApplication::translate("Dialog", "\345\220\221\344\270\213\346\237\245\346\211\276", nullptr));
        pushButton_6->setText(QApplication::translate("Dialog", "\345\205\250\351\203\250\351\200\211\346\213\251", nullptr));
        pushButton_7->setText(QApplication::translate("Dialog", "\345\220\221\344\270\212\346\233\277\346\215\242", nullptr));
        pushButton_8->setText(QApplication::translate("Dialog", "\345\220\221\344\270\213\346\233\277\346\215\242", nullptr));
        pushButton_9->setText(QApplication::translate("Dialog", "\345\205\250\351\203\250\346\233\277\346\215\242", nullptr));
        AdvOption_2->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        label_4->setText(QApplication::translate("Dialog", "\351\253\230\347\272\247", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\237\245\346\211\276\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\346\233\277\346\215\242\357\274\232", nullptr));
        advFindRadio2_2->setText(QApplication::translate("Dialog", "Search with &regular expressions", nullptr));
        advFindRadio3_2->setText(QApplication::translate("Dialog", "Search &with special characters", nullptr));
        findcheckBox1_2->setText(QApplication::translate("Dialog", "\344\273\205\345\214\271\351\205\215\345\256\214\346\225\264\345\255\227\350\257\215", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\346\232\202\346\234\252\347\274\226\345\206\231", nullptr));
        findBtn->setText(QApplication::translate("Dialog", "\346\237\245\346\211\276(&F)", nullptr));
        replaceBtn->setText(QApplication::translate("Dialog", "\346\233\277\346\215\242(&R)", nullptr));
        AdvSearchBtn->setText(QApplication::translate("Dialog", "Advanced Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *sellBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buyBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *addBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *queryBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *passwordBtn;
    QStackedWidget *stackedWidget;
    QWidget *sellPage;
    QLabel *label;
    QComboBox *sellBrandComboBox;
    QLabel *label_24;
    QSpinBox *sellNumSpinBox;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *sellOkBtn;
    QLabel *label_9;
    QLineEdit *sellPriceLineEdit;
    QLabel *label_25;
    QComboBox *sellTypeComboBox;
    QPushButton *sellCancelBtn;
    QLabel *label_8;
    QLabel *sellLastNumLabel;
    QLineEdit *sellSumLineEdit;
    QLabel *label_13;
    QWidget *buyPage;
    QLabel *label_3;
    QLabel *label_20;
    QLabel *label_2;
    QComboBox *goodsTypeComboBox;
    QSpinBox *goodsNumSpinBox;
    QPushButton *goodsOkBtn;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_19;
    QLabel *label_10;
    QLineEdit *goodsSumLineEdit;
    QPushButton *goodsCancelBtn;
    QComboBox *goodsBrandComboBox;
    QLineEdit *goodsPriceLineEdit;
    QLabel *label_11;
    QWidget *page_2;
    QLabel *label_27;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_14;
    QSpinBox *newPriceSpinBox;
    QComboBox *newTypeComboBox;
    QPushButton *newOkBtn;
    QPushButton *newCancelBtn;
    QLabel *label_16;
    QLineEdit *newBrandLineEdit;
    QLineEdit *newSumLineEdit;
    QLabel *label_21;
    QSpinBox *newNumSpinBox;
    QLabel *label_22;
    QWidget *page_4;
    QLabel *label_28;
    QTableView *tableView;
    QLabel *label_57;
    QLabel *label_60;
    QComboBox *queryTypeComboBox;
    QPushButton *queryPushButton;
    QComboBox *queryBrandComboBox;
    QWidget *page;
    QLabel *label_4;
    QLabel *label_23;
    QLabel *label_26;
    QLineEdit *oldPwdLineEdit;
    QLineEdit *newPwdLineEdit;
    QPushButton *changePwdBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(750, 500);
        Widget->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 631, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sellBtn = new QPushButton(layoutWidget);
        sellBtn->setObjectName(QStringLiteral("sellBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sellBtn->sizePolicy().hasHeightForWidth());
        sellBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(sellBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buyBtn = new QPushButton(layoutWidget);
        buyBtn->setObjectName(QStringLiteral("buyBtn"));
        sizePolicy.setHeightForWidth(buyBtn->sizePolicy().hasHeightForWidth());
        buyBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(buyBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addBtn = new QPushButton(layoutWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        sizePolicy.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(addBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        queryBtn = new QPushButton(layoutWidget);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        sizePolicy.setHeightForWidth(queryBtn->sizePolicy().hasHeightForWidth());
        queryBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(queryBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        passwordBtn = new QPushButton(layoutWidget);
        passwordBtn->setObjectName(QStringLiteral("passwordBtn"));
        sizePolicy.setHeightForWidth(passwordBtn->sizePolicy().hasHeightForWidth());
        passwordBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(passwordBtn);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(25, 70, 711, 411));
        sellPage = new QWidget();
        sellPage->setObjectName(QStringLiteral("sellPage"));
        label = new QLabel(sellPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 700, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        sellBrandComboBox = new QComboBox(sellPage);
        sellBrandComboBox->setObjectName(QStringLiteral("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(240, 130, 311, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sellBrandComboBox->sizePolicy().hasHeightForWidth());
        sellBrandComboBox->setSizePolicy(sizePolicy1);
        label_24 = new QLabel(sellPage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(180, 170, 36, 16));
        sellNumSpinBox = new QSpinBox(sellPage);
        sellNumSpinBox->setObjectName(QStringLiteral("sellNumSpinBox"));
        sellNumSpinBox->setGeometry(QRect(240, 210, 101, 22));
        label_6 = new QLabel(sellPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 90, 36, 16));
        label_7 = new QLabel(sellPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 130, 36, 16));
        sellOkBtn = new QPushButton(sellPage);
        sellOkBtn->setObjectName(QStringLiteral("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(230, 320, 60, 50));
        label_9 = new QLabel(sellPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 250, 36, 16));
        sellPriceLineEdit = new QLineEdit(sellPage);
        sellPriceLineEdit->setObjectName(QStringLiteral("sellPriceLineEdit"));
        sellPriceLineEdit->setGeometry(QRect(240, 170, 101, 20));
        sellPriceLineEdit->setReadOnly(true);
        label_25 = new QLabel(sellPage);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(350, 170, 54, 12));
        sellTypeComboBox = new QComboBox(sellPage);
        sellTypeComboBox->setObjectName(QStringLiteral("sellTypeComboBox"));
        sellTypeComboBox->setGeometry(QRect(240, 90, 161, 20));
        sizePolicy1.setHeightForWidth(sellTypeComboBox->sizePolicy().hasHeightForWidth());
        sellTypeComboBox->setSizePolicy(sizePolicy1);
        sellCancelBtn = new QPushButton(sellPage);
        sellCancelBtn->setObjectName(QStringLiteral("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(380, 320, 60, 50));
        label_8 = new QLabel(sellPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 210, 36, 16));
        sellLastNumLabel = new QLabel(sellPage);
        sellLastNumLabel->setObjectName(QStringLiteral("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(350, 210, 111, 20));
        sellSumLineEdit = new QLineEdit(sellPage);
        sellSumLineEdit->setObjectName(QStringLiteral("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(240, 250, 100, 20));
        sellSumLineEdit->setReadOnly(true);
        label_13 = new QLabel(sellPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(360, 250, 54, 12));
        stackedWidget->addWidget(sellPage);
        buyPage = new QWidget();
        buyPage->setObjectName(QStringLiteral("buyPage"));
        label_3 = new QLabel(buyPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 20, 700, 20));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(buyPage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(180, 250, 36, 16));
        label_2 = new QLabel(buyPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 90, 36, 16));
        goodsTypeComboBox = new QComboBox(buyPage);
        goodsTypeComboBox->setObjectName(QStringLiteral("goodsTypeComboBox"));
        goodsTypeComboBox->setGeometry(QRect(240, 90, 151, 20));
        goodsNumSpinBox = new QSpinBox(buyPage);
        goodsNumSpinBox->setObjectName(QStringLiteral("goodsNumSpinBox"));
        goodsNumSpinBox->setGeometry(QRect(240, 210, 71, 20));
        goodsOkBtn = new QPushButton(buyPage);
        goodsOkBtn->setObjectName(QStringLiteral("goodsOkBtn"));
        goodsOkBtn->setGeometry(QRect(230, 320, 60, 50));
        label_5 = new QLabel(buyPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 130, 36, 16));
        label_12 = new QLabel(buyPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(360, 170, 54, 12));
        label_19 = new QLabel(buyPage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(350, 250, 54, 12));
        label_10 = new QLabel(buyPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(180, 170, 36, 16));
        goodsSumLineEdit = new QLineEdit(buyPage);
        goodsSumLineEdit->setObjectName(QStringLiteral("goodsSumLineEdit"));
        goodsSumLineEdit->setGeometry(QRect(240, 250, 100, 20));
        goodsSumLineEdit->setReadOnly(true);
        goodsCancelBtn = new QPushButton(buyPage);
        goodsCancelBtn->setObjectName(QStringLiteral("goodsCancelBtn"));
        goodsCancelBtn->setGeometry(QRect(380, 320, 60, 50));
        goodsBrandComboBox = new QComboBox(buyPage);
        goodsBrandComboBox->setObjectName(QStringLiteral("goodsBrandComboBox"));
        goodsBrandComboBox->setGeometry(QRect(240, 130, 311, 20));
        goodsPriceLineEdit = new QLineEdit(buyPage);
        goodsPriceLineEdit->setObjectName(QStringLiteral("goodsPriceLineEdit"));
        goodsPriceLineEdit->setGeometry(QRect(240, 170, 100, 20));
        goodsPriceLineEdit->setReadOnly(true);
        label_11 = new QLabel(buyPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(180, 210, 36, 16));
        stackedWidget->addWidget(buyPage);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_27 = new QLabel(page_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(0, 20, 700, 20));
        label_27->setFont(font);
        label_27->setFrameShape(QFrame::StyledPanel);
        label_27->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(180, 130, 36, 16));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 210, 36, 16));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(340, 170, 54, 12));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(180, 170, 36, 16));
        newPriceSpinBox = new QSpinBox(page_2);
        newPriceSpinBox->setObjectName(QStringLiteral("newPriceSpinBox"));
        newPriceSpinBox->setGeometry(QRect(240, 170, 91, 20));
        newPriceSpinBox->setMinimum(1);
        newPriceSpinBox->setMaximum(99999);
        newPriceSpinBox->setValue(1);
        newTypeComboBox = new QComboBox(page_2);
        newTypeComboBox->setObjectName(QStringLiteral("newTypeComboBox"));
        newTypeComboBox->setGeometry(QRect(240, 90, 151, 20));
        newOkBtn = new QPushButton(page_2);
        newOkBtn->setObjectName(QStringLiteral("newOkBtn"));
        newOkBtn->setGeometry(QRect(230, 320, 60, 50));
        newCancelBtn = new QPushButton(page_2);
        newCancelBtn->setObjectName(QStringLiteral("newCancelBtn"));
        newCancelBtn->setGeometry(QRect(380, 320, 60, 50));
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(180, 90, 36, 16));
        newBrandLineEdit = new QLineEdit(page_2);
        newBrandLineEdit->setObjectName(QStringLiteral("newBrandLineEdit"));
        newBrandLineEdit->setGeometry(QRect(240, 130, 210, 20));
        newSumLineEdit = new QLineEdit(page_2);
        newSumLineEdit->setObjectName(QStringLiteral("newSumLineEdit"));
        newSumLineEdit->setGeometry(QRect(240, 250, 100, 20));
        newSumLineEdit->setReadOnly(true);
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(350, 250, 54, 12));
        newNumSpinBox = new QSpinBox(page_2);
        newNumSpinBox->setObjectName(QStringLiteral("newNumSpinBox"));
        newNumSpinBox->setGeometry(QRect(240, 210, 61, 20));
        newNumSpinBox->setMinimum(1);
        newNumSpinBox->setMaximum(999);
        newNumSpinBox->setValue(1);
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(180, 250, 36, 16));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_28 = new QLabel(page_4);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(0, 20, 700, 20));
        label_28->setFont(font);
        label_28->setFrameShape(QFrame::StyledPanel);
        label_28->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(page_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 130, 691, 281));
        label_57 = new QLabel(page_4);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(18, 60, 36, 16));
        label_60 = new QLabel(page_4);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(20, 100, 36, 16));
        queryTypeComboBox = new QComboBox(page_4);
        queryTypeComboBox->setObjectName(QStringLiteral("queryTypeComboBox"));
        queryTypeComboBox->setGeometry(QRect(60, 60, 151, 21));
        queryPushButton = new QPushButton(page_4);
        queryPushButton->setObjectName(QStringLiteral("queryPushButton"));
        queryPushButton->setGeometry(QRect(460, 50, 91, 61));
        queryBrandComboBox = new QComboBox(page_4);
        queryBrandComboBox->setObjectName(QStringLiteral("queryBrandComboBox"));
        queryBrandComboBox->setGeometry(QRect(60, 100, 321, 20));
        sizePolicy1.setHeightForWidth(queryBrandComboBox->sizePolicy().hasHeightForWidth());
        queryBrandComboBox->setSizePolicy(sizePolicy1);
        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 20, 700, 20));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(240, 120, 81, 16));
        label_26 = new QLabel(page);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(240, 160, 54, 12));
        oldPwdLineEdit = new QLineEdit(page);
        oldPwdLineEdit->setObjectName(QStringLiteral("oldPwdLineEdit"));
        oldPwdLineEdit->setGeometry(QRect(290, 120, 161, 20));
        newPwdLineEdit = new QLineEdit(page);
        newPwdLineEdit->setObjectName(QStringLiteral("newPwdLineEdit"));
        newPwdLineEdit->setGeometry(QRect(290, 160, 161, 20));
        changePwdBtn = new QPushButton(page);
        changePwdBtn->setObjectName(QStringLiteral("changePwdBtn"));
        changePwdBtn->setGeometry(QRect(320, 220, 60, 50));
        stackedWidget->addWidget(page);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\225\260\346\215\256\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        sellBtn->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", nullptr));
        buyBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        addBtn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        queryBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        passwordBtn->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", nullptr));
        label_24->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        sellOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        label_9->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_25->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        sellCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_8->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        sellLastNumLabel->setText(QApplication::translate("Widget", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", nullptr));
        label_13->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        label_3->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        label_20->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        goodsOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_12->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        label_19->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        label_10->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        goodsCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_11->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_27->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label_18->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_15->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_17->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        label_14->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        newOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        newCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_16->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_21->setText(QApplication::translate("Widget", "\345\205\203", nullptr));
        label_22->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_28->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        label_57->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_60->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        queryPushButton->setText(QApplication::translate("Widget", "\346\237\245  \350\257\242", nullptr));
        label_4->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_23->setText(QApplication::translate("Widget", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_26->setText(QApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        changePwdBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

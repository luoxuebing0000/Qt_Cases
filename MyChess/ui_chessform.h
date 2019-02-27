/********************************************************************************
** Form generated from reading UI file 'chessform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSFORM_H
#define UI_CHESSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *lbl1;
    QLCDNumber *lcdNumber1;
    QFrame *frame_2;
    QLabel *lbl2;
    QLCDNumber *lcdNumber2;
    QFrame *frame_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_item;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_pvp;
    QPushButton *btn_pvc;
    QPushButton *btn_nvn;

    void setupUi(QWidget *ChessForm)
    {
        if (ChessForm->objectName().isEmpty())
            ChessForm->setObjectName(QString::fromUtf8("ChessForm"));
        ChessForm->resize(800, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChessForm->sizePolicy().hasHeightForWidth());
        ChessForm->setSizePolicy(sizePolicy);
        ChessForm->setMinimumSize(QSize(780, 620));
        gridLayout_2 = new QGridLayout(ChessForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        frame = new QFrame(ChessForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(120, 16777215));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbl1 = new QLabel(frame);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(10, 10, 91, 51));
        lcdNumber1 = new QLCDNumber(frame);
        lcdNumber1->setObjectName(QString::fromUtf8("lcdNumber1"));
        lcdNumber1->setGeometry(QRect(10, 60, 91, 81));
        lcdNumber1->setDigitCount(2);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(ChessForm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(120, 16777215));
        frame_2->setFrameShape(QFrame::WinPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbl2 = new QLabel(frame_2);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(10, 20, 91, 51));
        lcdNumber2 = new QLCDNumber(frame_2);
        lcdNumber2->setObjectName(QString::fromUtf8("lcdNumber2"));
        lcdNumber2->setGeometry(QRect(10, 60, 81, 91));
        lcdNumber2->setDigitCount(2);

        gridLayout_2->addWidget(frame_2, 0, 2, 1, 1);

        frame_3 = new QFrame(ChessForm);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMaximumSize(QSize(16777215, 80));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 30, 391, 32));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_item = new QComboBox(widget);
        comboBox_item->setObjectName(QString::fromUtf8("comboBox_item"));

        horizontalLayout_2->addWidget(comboBox_item);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_pvp = new QPushButton(widget);
        btn_pvp->setObjectName(QString::fromUtf8("btn_pvp"));

        horizontalLayout->addWidget(btn_pvp);

        btn_pvc = new QPushButton(widget);
        btn_pvc->setObjectName(QString::fromUtf8("btn_pvc"));

        horizontalLayout->addWidget(btn_pvc);

        btn_nvn = new QPushButton(widget);
        btn_nvn->setObjectName(QString::fromUtf8("btn_nvn"));

        horizontalLayout->addWidget(btn_nvn);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 3);


        retranslateUi(ChessForm);

        QMetaObject::connectSlotsByName(ChessForm);
    } // setupUi

    void retranslateUi(QWidget *ChessForm)
    {
        ChessForm->setWindowTitle(QApplication::translate("ChessForm", "Form", nullptr));
        lbl1->setText(QApplication::translate("ChessForm", "TextLabel", nullptr));
        lbl2->setText(QApplication::translate("ChessForm", "TextLabel", nullptr));
        btn_pvp->setText(QApplication::translate("ChessForm", "\344\272\272\344\272\272\345\257\271\346\210\230", nullptr));
        btn_pvc->setText(QApplication::translate("ChessForm", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        btn_nvn->setText(QApplication::translate("ChessForm", "\347\275\221\347\273\234\345\257\271\346\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessForm: public Ui_ChessForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSFORM_H

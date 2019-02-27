/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_As_A;
    QAction *actionSave_ALl_L;
    QAction *actionClose_C;
    QAction *actionClose_All_L;
    QAction *actionPrint_P;
    QAction *actionExit_X;
    QAction *actionRevoke_U;
    QAction *actionRedo_R;
    QAction *actionCut_T;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionDelete_D;
    QAction *actionSelect_All_A;
    QAction *actionCopy_whole_road_to_clipboard_C;
    QAction *actionCopy_file_name_to_clipboard_F;
    QAction *actionCopy_directory_to_clipboard_D;
    QAction *actionFind_F;
    QAction *actionAdvanced_Search;
    QAction *actionFind_Next_N;
    QAction *actionFind_Previous_P;
    QAction *actionReplace_R;
    QAction *actionJump_to_row_G;
    QAction *actionAbout_TextEdit;
    QAction *actionto_Upper;
    QAction *actionto_Lower;
    QAction *actionBold_B;
    QAction *actionItalic_I;
    QAction *actionUnderline_U;
    QAction *action_Left;
    QAction *action_Center;
    QAction *action_Right;
    QAction *action_Justify;
    QAction *action_Color;
    QAction *actionNo_Recent_Files;
    QAction *actionPrint_View_V;
    QAction *action_Export_PDF;
    QAction *actiontoUTF8;
    QAction *actionGBK;
    QAction *actiontoGB2312;
    QAction *actiontoUTF_12;
    QAction *actiontoUTF_32;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *menuRecent_Files_R;
    QMenu *menuEdit_E;
    QMenu *menuCopy_to_Clipboard_O;
    QMenu *menuToggle_Case_N;
    QMenu *menuSearch_S;
    QMenu *menuView_V;
    QMenu *menuFormat_C;
    QMenu *menuLanguage_L;
    QMenu *menuSetting_G;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 480);
        MainWindow->setMinimumSize(QSize(600, 480));
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/win/filenew.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew_N->setIcon(icon);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/win/fileopen.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen_O->setIcon(icon1);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        actionSave_As_A = new QAction(MainWindow);
        actionSave_As_A->setObjectName(QStringLiteral("actionSave_As_A"));
        actionSave_ALl_L = new QAction(MainWindow);
        actionSave_ALl_L->setObjectName(QStringLiteral("actionSave_ALl_L"));
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QStringLiteral("actionClose_C"));
        actionClose_All_L = new QAction(MainWindow);
        actionClose_All_L->setObjectName(QStringLiteral("actionClose_All_L"));
        actionPrint_P = new QAction(MainWindow);
        actionPrint_P->setObjectName(QStringLiteral("actionPrint_P"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/win/fileprint.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPrint_P->setIcon(icon2);
        actionExit_X = new QAction(MainWindow);
        actionExit_X->setObjectName(QStringLiteral("actionExit_X"));
        actionRevoke_U = new QAction(MainWindow);
        actionRevoke_U->setObjectName(QStringLiteral("actionRevoke_U"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/win/editundo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRevoke_U->setIcon(icon3);
        actionRedo_R = new QAction(MainWindow);
        actionRedo_R->setObjectName(QStringLiteral("actionRedo_R"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/win/editredo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo_R->setIcon(icon4);
        actionCut_T = new QAction(MainWindow);
        actionCut_T->setObjectName(QStringLiteral("actionCut_T"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/win/editcut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut_T->setIcon(icon5);
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/win/editcopy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy_C->setIcon(icon6);
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName(QStringLiteral("actionPaste_P"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/win/editpaste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste_P->setIcon(icon7);
        actionDelete_D = new QAction(MainWindow);
        actionDelete_D->setObjectName(QStringLiteral("actionDelete_D"));
        actionSelect_All_A = new QAction(MainWindow);
        actionSelect_All_A->setObjectName(QStringLiteral("actionSelect_All_A"));
        actionCopy_whole_road_to_clipboard_C = new QAction(MainWindow);
        actionCopy_whole_road_to_clipboard_C->setObjectName(QStringLiteral("actionCopy_whole_road_to_clipboard_C"));
        actionCopy_file_name_to_clipboard_F = new QAction(MainWindow);
        actionCopy_file_name_to_clipboard_F->setObjectName(QStringLiteral("actionCopy_file_name_to_clipboard_F"));
        actionCopy_directory_to_clipboard_D = new QAction(MainWindow);
        actionCopy_directory_to_clipboard_D->setObjectName(QStringLiteral("actionCopy_directory_to_clipboard_D"));
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QStringLiteral("actionFind_F"));
        actionAdvanced_Search = new QAction(MainWindow);
        actionAdvanced_Search->setObjectName(QStringLiteral("actionAdvanced_Search"));
        actionFind_Next_N = new QAction(MainWindow);
        actionFind_Next_N->setObjectName(QStringLiteral("actionFind_Next_N"));
        actionFind_Previous_P = new QAction(MainWindow);
        actionFind_Previous_P->setObjectName(QStringLiteral("actionFind_Previous_P"));
        actionReplace_R = new QAction(MainWindow);
        actionReplace_R->setObjectName(QStringLiteral("actionReplace_R"));
        actionJump_to_row_G = new QAction(MainWindow);
        actionJump_to_row_G->setObjectName(QStringLiteral("actionJump_to_row_G"));
        actionAbout_TextEdit = new QAction(MainWindow);
        actionAbout_TextEdit->setObjectName(QStringLiteral("actionAbout_TextEdit"));
        actionto_Upper = new QAction(MainWindow);
        actionto_Upper->setObjectName(QStringLiteral("actionto_Upper"));
        actionto_Lower = new QAction(MainWindow);
        actionto_Lower->setObjectName(QStringLiteral("actionto_Lower"));
        actionBold_B = new QAction(MainWindow);
        actionBold_B->setObjectName(QStringLiteral("actionBold_B"));
        actionBold_B->setCheckable(true);
        actionBold_B->setChecked(false);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        actionBold_B->setFont(font);
        actionItalic_I = new QAction(MainWindow);
        actionItalic_I->setObjectName(QStringLiteral("actionItalic_I"));
        actionItalic_I->setCheckable(true);
        QFont font1;
        font1.setItalic(true);
        actionItalic_I->setFont(font1);
        actionUnderline_U = new QAction(MainWindow);
        actionUnderline_U->setObjectName(QStringLiteral("actionUnderline_U"));
        actionUnderline_U->setCheckable(true);
        QFont font2;
        font2.setUnderline(true);
        actionUnderline_U->setFont(font2);
        action_Left = new QAction(MainWindow);
        action_Left->setObjectName(QStringLiteral("action_Left"));
        action_Left->setCheckable(false);
        action_Center = new QAction(MainWindow);
        action_Center->setObjectName(QStringLiteral("action_Center"));
        action_Center->setCheckable(false);
        action_Right = new QAction(MainWindow);
        action_Right->setObjectName(QStringLiteral("action_Right"));
        action_Right->setCheckable(false);
        action_Justify = new QAction(MainWindow);
        action_Justify->setObjectName(QStringLiteral("action_Justify"));
        action_Justify->setCheckable(false);
        action_Color = new QAction(MainWindow);
        action_Color->setObjectName(QStringLiteral("action_Color"));
        actionNo_Recent_Files = new QAction(MainWindow);
        actionNo_Recent_Files->setObjectName(QStringLiteral("actionNo_Recent_Files"));
        actionPrint_View_V = new QAction(MainWindow);
        actionPrint_View_V->setObjectName(QStringLiteral("actionPrint_View_V"));
        action_Export_PDF = new QAction(MainWindow);
        action_Export_PDF->setObjectName(QStringLiteral("action_Export_PDF"));
        actiontoUTF8 = new QAction(MainWindow);
        actiontoUTF8->setObjectName(QStringLiteral("actiontoUTF8"));
        actionGBK = new QAction(MainWindow);
        actionGBK->setObjectName(QStringLiteral("actionGBK"));
        actiontoGB2312 = new QAction(MainWindow);
        actiontoGB2312->setObjectName(QStringLiteral("actiontoGB2312"));
        actiontoUTF_12 = new QAction(MainWindow);
        actiontoUTF_12->setObjectName(QStringLiteral("actiontoUTF_12"));
        actiontoUTF_32 = new QAction(MainWindow);
        actiontoUTF_32->setObjectName(QStringLiteral("actiontoUTF_32"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 28));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        menuRecent_Files_R = new QMenu(fileMenu);
        menuRecent_Files_R->setObjectName(QStringLiteral("menuRecent_Files_R"));
        menuEdit_E = new QMenu(menubar);
        menuEdit_E->setObjectName(QStringLiteral("menuEdit_E"));
        menuCopy_to_Clipboard_O = new QMenu(menuEdit_E);
        menuCopy_to_Clipboard_O->setObjectName(QStringLiteral("menuCopy_to_Clipboard_O"));
        menuToggle_Case_N = new QMenu(menuEdit_E);
        menuToggle_Case_N->setObjectName(QStringLiteral("menuToggle_Case_N"));
        menuSearch_S = new QMenu(menubar);
        menuSearch_S->setObjectName(QStringLiteral("menuSearch_S"));
        menuView_V = new QMenu(menubar);
        menuView_V->setObjectName(QStringLiteral("menuView_V"));
        menuFormat_C = new QMenu(menubar);
        menuFormat_C->setObjectName(QStringLiteral("menuFormat_C"));
        menuLanguage_L = new QMenu(menubar);
        menuLanguage_L->setObjectName(QStringLiteral("menuLanguage_L"));
        menuSetting_G = new QMenu(menubar);
        menuSetting_G->setObjectName(QStringLiteral("menuSetting_G"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(menuEdit_E->menuAction());
        menubar->addAction(menuSearch_S->menuAction());
        menubar->addAction(menuView_V->menuAction());
        menubar->addAction(menuFormat_C->menuAction());
        menubar->addAction(menuLanguage_L->menuAction());
        menubar->addAction(menuSetting_G->menuAction());
        menubar->addAction(menuAbout->menuAction());
        fileMenu->addAction(actionNew_N);
        fileMenu->addAction(actionOpen_O);
        fileMenu->addAction(menuRecent_Files_R->menuAction());
        fileMenu->addAction(actionSave_S);
        fileMenu->addAction(actionSave_As_A);
        fileMenu->addAction(actionClose_C);
        fileMenu->addAction(actionPrint_View_V);
        fileMenu->addAction(actionPrint_P);
        fileMenu->addAction(action_Export_PDF);
        fileMenu->addAction(actionExit_X);
        menuRecent_Files_R->addAction(actionNo_Recent_Files);
        menuEdit_E->addAction(actionRevoke_U);
        menuEdit_E->addAction(actionRedo_R);
        menuEdit_E->addAction(actionCut_T);
        menuEdit_E->addAction(actionCopy_C);
        menuEdit_E->addAction(actionPaste_P);
        menuEdit_E->addAction(actionDelete_D);
        menuEdit_E->addAction(actionSelect_All_A);
        menuEdit_E->addAction(menuCopy_to_Clipboard_O->menuAction());
        menuEdit_E->addAction(menuToggle_Case_N->menuAction());
        menuCopy_to_Clipboard_O->addAction(actionCopy_whole_road_to_clipboard_C);
        menuCopy_to_Clipboard_O->addAction(actionCopy_file_name_to_clipboard_F);
        menuCopy_to_Clipboard_O->addAction(actionCopy_directory_to_clipboard_D);
        menuToggle_Case_N->addAction(actionto_Upper);
        menuToggle_Case_N->addAction(actionto_Lower);
        menuSearch_S->addAction(actionFind_F);
        menuSearch_S->addAction(actionAdvanced_Search);
        menuSearch_S->addAction(actionFind_Next_N);
        menuSearch_S->addAction(actionFind_Previous_P);
        menuSearch_S->addAction(actionReplace_R);
        menuSearch_S->addAction(actionJump_to_row_G);
        menuFormat_C->addAction(actionBold_B);
        menuFormat_C->addAction(actionItalic_I);
        menuFormat_C->addAction(actionUnderline_U);
        menuFormat_C->addAction(action_Left);
        menuFormat_C->addAction(action_Center);
        menuFormat_C->addAction(action_Right);
        menuFormat_C->addAction(action_Justify);
        menuFormat_C->addAction(action_Color);
        menuSetting_G->addAction(actiontoUTF8);
        menuSetting_G->addAction(actionGBK);
        menuSetting_G->addAction(actiontoGB2312);
        menuSetting_G->addAction(actiontoUTF_12);
        menuSetting_G->addAction(actiontoUTF_32);
        menuAbout->addAction(actionAbout_TextEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "notepad++", nullptr));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", nullptr));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", nullptr));
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", nullptr));
        actionSave_As_A->setText(QApplication::translate("MainWindow", "Save As(&A)", nullptr));
        actionSave_ALl_L->setText(QApplication::translate("MainWindow", "Save ALl(&L)", nullptr));
        actionClose_C->setText(QApplication::translate("MainWindow", "Close(&C)", nullptr));
        actionClose_All_L->setText(QApplication::translate("MainWindow", "Close All(&L)", nullptr));
        actionPrint_P->setText(QApplication::translate("MainWindow", "Print(&P)", nullptr));
        actionExit_X->setText(QApplication::translate("MainWindow", "Exit(&X)", nullptr));
        actionRevoke_U->setText(QApplication::translate("MainWindow", "Revoke(&U)", nullptr));
        actionRedo_R->setText(QApplication::translate("MainWindow", "Redo(&R)", nullptr));
        actionCut_T->setText(QApplication::translate("MainWindow", "Cut(&T)", nullptr));
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy(&C)", nullptr));
        actionPaste_P->setText(QApplication::translate("MainWindow", "Paste(&P)", nullptr));
        actionDelete_D->setText(QApplication::translate("MainWindow", "Delete(&D)", nullptr));
        actionSelect_All_A->setText(QApplication::translate("MainWindow", "Select All(&A)", nullptr));
        actionCopy_whole_road_to_clipboard_C->setText(QApplication::translate("MainWindow", "Copy whole road to clipboard(&C)", nullptr));
        actionCopy_file_name_to_clipboard_F->setText(QApplication::translate("MainWindow", "Copy file name to clipboard(&F)", nullptr));
        actionCopy_directory_to_clipboard_D->setText(QApplication::translate("MainWindow", "Copy directory to clipboard(&D)", nullptr));
        actionFind_F->setText(QApplication::translate("MainWindow", "Find(&F)", nullptr));
        actionAdvanced_Search->setText(QApplication::translate("MainWindow", "Advanced Search", nullptr));
        actionFind_Next_N->setText(QApplication::translate("MainWindow", "Find Next(&N)", nullptr));
        actionFind_Previous_P->setText(QApplication::translate("MainWindow", "Find Previous(&P)", nullptr));
        actionReplace_R->setText(QApplication::translate("MainWindow", "Replace(&R)", nullptr));
        actionJump_to_row_G->setText(QApplication::translate("MainWindow", "Jump to row(&G)", nullptr));
        actionAbout_TextEdit->setText(QApplication::translate("MainWindow", "About TextEdit", nullptr));
        actionto_Upper->setText(QApplication::translate("MainWindow", "to Upper", nullptr));
        actionto_Lower->setText(QApplication::translate("MainWindow", "to Lower", nullptr));
        actionBold_B->setText(QApplication::translate("MainWindow", "Bold(&B)", nullptr));
        actionItalic_I->setText(QApplication::translate("MainWindow", "Italic(&I)", nullptr));
        actionUnderline_U->setText(QApplication::translate("MainWindow", "Underline(&U)", nullptr));
        action_Left->setText(QApplication::translate("MainWindow", "&Left", nullptr));
        action_Center->setText(QApplication::translate("MainWindow", "&Center", nullptr));
        action_Right->setText(QApplication::translate("MainWindow", "_Right", nullptr));
        action_Justify->setText(QApplication::translate("MainWindow", "_Justify", nullptr));
        action_Color->setText(QApplication::translate("MainWindow", "&Color", nullptr));
        actionNo_Recent_Files->setText(QApplication::translate("MainWindow", "No Recent Files", nullptr));
        actionPrint_View_V->setText(QApplication::translate("MainWindow", "Print View(&V)", nullptr));
        action_Export_PDF->setText(QApplication::translate("MainWindow", "&Export PDF", nullptr));
        actiontoUTF8->setText(QApplication::translate("MainWindow", "toUTF8", nullptr));
        actionGBK->setText(QApplication::translate("MainWindow", "toGBK", nullptr));
        actiontoGB2312->setText(QApplication::translate("MainWindow", "toGB2312", nullptr));
        actiontoUTF_12->setText(QApplication::translate("MainWindow", "toUTF-16", nullptr));
        actiontoUTF_32->setText(QApplication::translate("MainWindow", "toUTF-32", nullptr));
        fileMenu->setTitle(QApplication::translate("MainWindow", "FIle(&F)", nullptr));
        menuRecent_Files_R->setTitle(QApplication::translate("MainWindow", "Recent Files(R)", nullptr));
        menuEdit_E->setTitle(QApplication::translate("MainWindow", "Edit(&E)", nullptr));
        menuCopy_to_Clipboard_O->setTitle(QApplication::translate("MainWindow", "Copy to Clipboard(&O)", nullptr));
        menuToggle_Case_N->setTitle(QApplication::translate("MainWindow", "Toggle Case(&N)", nullptr));
        menuSearch_S->setTitle(QApplication::translate("MainWindow", "Search(&S)", nullptr));
        menuView_V->setTitle(QApplication::translate("MainWindow", "View(&V)", nullptr));
        menuFormat_C->setTitle(QApplication::translate("MainWindow", "Format(C)", nullptr));
        menuLanguage_L->setTitle(QApplication::translate("MainWindow", "Language(L)", nullptr));
        menuSetting_G->setTitle(QApplication::translate("MainWindow", "Setting(G)", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

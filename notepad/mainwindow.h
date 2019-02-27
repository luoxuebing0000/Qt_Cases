#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "textplaint.h"
#include <QList>
#include <QLabel>
#include <QFrame>
class QTextStream;
class QPrinter;

struct StatusBarInfoLabel{
    QLabel *textType;
    QLabel *length;
    QLabel *lengthNo;
    QLabel *lines;
    QLabel *linesNum;
    QLabel *line;
    QLabel *lineNo;
    QLabel *col;
    QLabel *colNo;
    QLabel *codec;
};


namespace Ui {
    class MainWindow;
}

class MainWindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private:
    bool maybeSave();
    void setCurrentFileName(const QString &fileName);
    bool load(const QString &f);
    void mergeFormatOnWordOrSelection(const QTextCharFormat &format);
    void colorChanged(const QColor &c);

    void getCorrectUnicode(QByteArray &str);

    void showStatusBarInfoLabel();
    void initStatusBarInfoLabel();

signals:
    void signal1();
    void undoSignal();
    void redoSignal();
private slots:

    void slot1();

    void textPlaintCursorChanged();

    void on_actionNew_N_triggered();

    bool on_actionSave_S_triggered();

    void on_actionOpen_O_triggered();

    bool on_actionSave_As_A_triggered();

    void on_actionClose_C_triggered();

    void on_actionExit_X_triggered();

    void on_actionAbout_TextEdit_triggered();

    void on_actionRevoke_U_triggered();

    void on_actionRedo_R_triggered();

    void on_actionCut_T_triggered();

    void on_actionCopy_C_triggered();

    void on_actionPaste_P_triggered();

    void on_actionDelete_D_triggered();

    void on_actionCopy_whole_road_to_clipboard_C_triggered();


    void on_actionCopy_file_name_to_clipboard_F_triggered();

    void on_actionCopy_directory_to_clipboard_D_triggered();

    void on_actionto_Upper_triggered();

    void on_actionto_Lower_triggered();

    void on_actionFind_F_triggered();

    void on_actionPrint_P_triggered();

    void on_actionPrint_View_V_triggered();

    void printPreview(QPrinter *printer);

    void on_action_Export_PDF_triggered();

    void on_actionBold_B_triggered();

    void on_actionItalic_I_triggered();

    void on_actionUnderline_U_triggered();

    void on_action_Color_triggered();

    void on_action_Left_triggered();

    void clipboardDataChanged();

    void on_actiontoUTF8_triggered();

    void on_actionGBK_triggered();

    void on_actionUndo_U_triggered();

private:
    Ui::MainWindow *ui;
    QTextStream *textStream;
    MyGCodeTextEdit *textPlaint;
    QString fileName;
    QString correctUnicode;
    QList<QString> fileList;
    StatusBarInfoLabel statusBarInfoLabel;
};

#endif // MAINWINDOW_H

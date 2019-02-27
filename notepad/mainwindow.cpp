#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QClipboard>
#include <QFileInfo>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QAbstractPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QTextCharFormat>
#include <QColor>
#include <QPixmap>
#include <QActionGroup>
#include <QClipboard>
#include <QTextCodec>
#include <QByteArray>
#include <string>
#include <QString>
#include <QWidget>

#include "about.h"
#include "finddialog.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   this->setWindowTitle("新建1--notepad++");

    //添加 工具栏
    ui->toolBar->addAction(ui->actionNew_N);
    ui->toolBar->addAction(ui->actionOpen_O);
    ui->toolBar->addAction(ui->actionPrint_P);
    ui->toolBar->addAction(ui->actionRevoke_U);
    ui->toolBar->addAction(ui->actionRedo_R);
    ui->toolBar->addAction(ui->actionCut_T);
    ui->toolBar->addAction(ui->actionCopy_C);
    ui->toolBar->addAction(ui->actionPaste_P);


    textPlaint = new MyGCodeTextEdit;
    setCentralWidget(textPlaint);
    textPlaint->setFocus();
    setCurrentFileName(QString());
    textStream = nullptr;

    correctUnicode = "UTF-8";

#ifndef QT_NO_CLIPBOARD
    connect(QApplication::clipboard(), SIGNAL(dataChanged()), this, SLOT(clipboardDataChanged()));
#endif
    connect(ui->actionOpen_O,SIGNAL(triggered()),this,SLOT(slot1()));
    connect(ui->actionSave_S,SIGNAL(triggered()),this,SLOT(slot1()));
    connect(ui->actionSave_As_A,SIGNAL(triggered()),ui->actionSave_S,SIGNAL(triggered()));

    // undo && redo
    connect(ui->actionRevoke_U,SIGNAL(triggered()),textPlaint,SLOT(undo()));
    connect(ui->actionRedo_R,SIGNAL(triggered()),textPlaint,SLOT(redo()));

    // 监听textPlaint鼠标移动时间
    connect(textPlaint,SIGNAL(cursorPositionChanged()),this,SLOT(textPlaintCursorChanged()));

    statusBarInfoLabel.textType = new QLabel(this);
    statusBarInfoLabel.length = new QLabel(this);
    statusBarInfoLabel.lengthNo = new QLabel(this);
    statusBarInfoLabel.lines = new QLabel(this);
    statusBarInfoLabel.linesNum = new QLabel(this);
    statusBarInfoLabel.line = new QLabel(this);
    statusBarInfoLabel.lineNo = new QLabel(this);
    statusBarInfoLabel.col = new QLabel(this);
    statusBarInfoLabel.colNo = new QLabel(this);
    statusBarInfoLabel.codec = new QLabel(this);

    // 初始化各个成员
    statusBarInfoLabel.textType->setText("Normal text file");
    statusBarInfoLabel.length->setText("length:");
    statusBarInfoLabel.lengthNo->setText("0");
    statusBarInfoLabel.lines->setText("lines:");
    statusBarInfoLabel.linesNum->setText("1");
    statusBarInfoLabel.line->setText("line:");
    statusBarInfoLabel.lineNo->setText("1");
    statusBarInfoLabel.col->setText("col:");
    statusBarInfoLabel.colNo->setText("1");
    statusBarInfoLabel.codec->setText(correctUnicode);

    initStatusBarInfoLabel();
    showStatusBarInfoLabel();

    textPlaint->setUndoRedoEnabled(true);


}

MainWindow::~MainWindow()
{
#ifndef QT_NO_CLIPBOARD
    if (const QMimeData *md = QApplication::clipboard()->mimeData())
        ui->actionPaste_P->setEnabled(md->hasText());
#endif
}


void MainWindow::slot1()
{
   ui->menuRecent_Files_R->clear();
   if(fileList.isEmpty())
   {
       ui->menuRecent_Files_R->addAction(ui->actionNo_Recent_Files);
   }
   else
   {
       for(QList<QString>::iterator begin = fileList.begin();begin != fileList.end();begin++)
       {
           ui->menuRecent_Files_R->addAction(new QAction(*begin,this));
       }
       ui->menuRecent_Files_R->addAction(new QAction("clear all",this));
   }
}

void MainWindow::clipboardDataChanged()
{
    qDebug() << "fjdlksjfk";
}

bool MainWindow::maybeSave()
{
    if(!textPlaint->document()->isModified())
    {
        return true;
    }

    QMessageBox::StandardButton ret;
    ret = QMessageBox::warning(this, tr("Application"),
                               tr("The document has been modified.\n"
                                  "Do you want to save your changes?"),
                               QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    if (ret == QMessageBox::Save)
        return on_actionSave_S_triggered();
    else if (ret == QMessageBox::Cancel)
        return false;
    return true;

}


void MainWindow::setCurrentFileName(const QString &fileName)
{
    this->fileName = fileName;
    this->textPlaint->document()->setModified(false);
    QString shownName;
    if (fileName.isEmpty())
    {
        shownName = "untitled.txt";
    }
    else
    {
        shownName = QFileInfo(fileName).fileName();
    }
    setWindowTitle(tr("%1[*] - %2").arg(shownName).arg(tr("notepad++")));
    setWindowModified(false);
}

void MainWindow::on_actionNew_N_triggered()
{

    if (maybeSave())
    {
        textPlaint->clear();
        correctUnicode = "UTF-8";
        statusBarInfoLabel.textType->setText("Normal text file");
        statusBarInfoLabel.lengthNo->setText("0");
        statusBarInfoLabel.linesNum->setText("1");
        statusBarInfoLabel.lineNo->setText("1");
        statusBarInfoLabel.colNo->setText("0");
        statusBarInfoLabel.codec->setText(correctUnicode);
        setCurrentFileName(QString());
    }
}

bool MainWindow::on_actionSave_S_triggered()
{
    if (fileName.isEmpty())
        return on_actionSave_As_A_triggered();
    if (fileName.startsWith(QStringLiteral(":/")))
        return on_actionSave_As_A_triggered();

    QTextDocumentWriter writer(fileName);
    bool success = writer.write(textPlaint->document());
    if (success)
    {
        textPlaint->document()->setModified(false);
        if(fileList.contains(fileName))
        {
            int index = fileList.indexOf(fileName);
            fileList.move(index,0);
        }
        else if(fileList.size() == 5)
        {
            fileList.pop_back();
            fileList.push_front(fileName);
        }
        else
        {
            fileList.push_front(fileName);
        }
    }
    return success;
}

void MainWindow::on_actionOpen_O_triggered()
{
    QString fn = QFileDialog::getOpenFileName(this, tr("Open File..."),
                                              QString(), tr("文本文件 (*.txt *.html *.htm);;All Files (*)"));
    if (!fn.isEmpty())
        if(load(fn))
        {
            if(fileList.contains(fn))
            {
                int index = fileList.indexOf(fn);
                fileList.move(index,0);
            }
            else if(fileList.size() == 5)
            {
                fileList.pop_back();
                fileList.push_front(fn);
            }
            else
            {
                fileList.push_front(fn);
            }
            statusBarInfoLabel.linesNum->setText(QString::number(textPlaint->getBlockCount()));
            statusBarInfoLabel.codec->setText(correctUnicode);
        }
}

bool MainWindow::load(const QString &f)
{
    if (!QFile::exists(f))
        return false;
    QFile file(f);
    if (!file.open(QFile::ReadOnly))
        return false;
    QByteArray data = file.readAll();
    getCorrectUnicode(data);
    std::string s = correctUnicode.toStdString();
    const char *c = s.c_str();
    QTextCodec *codec = QTextCodec::codecForName(c);
    QString str = codec->toUnicode(data);

    textPlaint->setPlainText(str);
    statusBarInfoLabel.lengthNo->setText(QString::number(file.size()));

    setCurrentFileName(f);
    textPlaint->show();
    return true;
}

bool MainWindow::on_actionSave_As_A_triggered()
{
    QString fn = QFileDialog::getSaveFileName(this, tr("Save as..."), QString(),
                                              tr("ODF files (*.odt);;文本文件 "
                                                 "(*.txt *.html *.htm);;All Files (*)"));
    if (fn.isEmpty())
        return false;
    if (!(fn.endsWith(".odt", Qt::CaseInsensitive)
          || fn.endsWith(".htm", Qt::CaseInsensitive)
          || fn.endsWith(".html", Qt::CaseInsensitive))) {
        fn += ".odt"; // default
    }
    setCurrentFileName(fn);
    return on_actionSave_S_triggered();
}

void MainWindow::on_actionClose_C_triggered()
{
    if(textPlaint->document()->isModified())
    {
        int ret = QMessageBox::information(this,"tip","是否保存已修改的文件",QMessageBox::No|QMessageBox::Yes);
        if(ret == 0x00004000)
        {
            on_actionSave_S_triggered();
        }
        else
        {
            textPlaint->clear();
            textPlaint->hide();
            this->setWindowTitle("notepad++");
        }

    }
    else
    {
        textPlaint->clear();
        textPlaint->hide();
        this->setWindowTitle("notepad++");
    }

}

void MainWindow::on_actionExit_X_triggered()
{
    if(textPlaint->document()->isModified())
    {
        int ret = QMessageBox::information(this,"quit","save",QMessageBox::No|QMessageBox::Yes);

        if(ret == 0x00004000)
        {
            on_actionSave_S_triggered();
        }
        else
        {
            this->close();
        }

    }
    else
    {
        this->close();
    }
}

void MainWindow::on_actionAbout_TextEdit_triggered()
{
    About *about = new About();
    about->setWindowTitle("About");
    about->show();
}

// 撤销  具体实现功能以后再做
void MainWindow::on_actionRevoke_U_triggered()
{
    textPlaint->clear();
}

// 重做，恢复到初始状态，具体实现功能之后再做
void MainWindow::on_actionRedo_R_triggered()
{
    emit redoSignal();
}

void MainWindow::on_actionCut_T_triggered()
{
    textPlaint->cut();
}

void MainWindow::on_actionCopy_C_triggered()
{
    textPlaint->copy();
}

void MainWindow::on_actionPaste_P_triggered()
{
    textPlaint->paste();
}

void MainWindow::on_actionDelete_D_triggered()
{
    textPlaint->textCursor().deleteChar();
}

void MainWindow::on_actionCopy_whole_road_to_clipboard_C_triggered()
{
    QString filename = QFileDialog::getOpenFileName();
    QFile file(filename);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(file.fileName());
}

void MainWindow::on_actionCopy_file_name_to_clipboard_F_triggered()
{
    QString filename = QFileDialog::getOpenFileName();
    QFile file(filename);
    QFileInfo  fileinfo(file);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(fileinfo.fileName());
}

void MainWindow::on_actionCopy_directory_to_clipboard_D_triggered()
{
    QString dir = QDir::currentPath();
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(dir);
}

void MainWindow::on_actionto_Upper_triggered()
{
     textPlaint->setPlainText(textPlaint->toPlainText().toUpper());

}

void MainWindow::on_actionto_Lower_triggered()
{
    textPlaint->setPlainText(textPlaint->toPlainText().toLower());
}

void MainWindow::on_actionFind_F_triggered()
{
   findDialog *finddialog = new findDialog;
   finddialog->show();

}

void MainWindow::on_actionPrint_P_triggered()
{
#if !defined(QT_NO_PRINTER) && !defined(QT_NO_PRINTDIALOG)
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog *dlg = new QPrintDialog(&printer, this);
    if (textPlaint->textCursor().hasSelection())
        dlg->addEnabledOption(QAbstractPrintDialog::PrintSelection);
    dlg->setWindowTitle(tr("Print Document"));
    if (dlg->exec() == QDialog::Accepted)
        textPlaint->print(&printer);
    delete dlg;
#endif
}

void MainWindow::on_actionPrint_View_V_triggered()
{
#if !defined(QT_NO_PRINTER) && !defined(QT_NO_PRINTDIALOG)
    QPrinter printer(QPrinter::HighResolution);
    QPrintPreviewDialog preview(&printer, this);
    connect(&preview, SIGNAL(paintRequested(QPrinter*)), SLOT(printPreview(QPrinter*)));
    preview.exec();
#endif
}

void MainWindow::printPreview(QPrinter *printer)
{
#ifdef QT_NO_PRINTER
    Q_UNUSED(printer);
#else
    textPlaint->print(printer);
#endif
}

void MainWindow::on_action_Export_PDF_triggered()
{
#ifndef QT_NO_PRINTER
//! [0]
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF",
                                                    QString(), "*.pdf");
    if (!fileName.isEmpty()) {
        if (QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        textPlaint->document()->print(&printer);
    }
//! [0]
#endif
}

void MainWindow::on_actionBold_B_triggered()
{
    QTextCharFormat fmt;
    qDebug() << "hrfekljfkl";
    qDebug() << ui->actionBold_B->isChecked();
    fmt.setFontWeight(ui->actionBold_B->isChecked() ? QFont::Bold : QFont::Normal);
    if(ui->actionBold_B->isChecked())
    {
        qDebug() << "hrfekljfkl";
    }
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::mergeFormatOnWordOrSelection(const QTextCharFormat &format)
{
    QTextCursor cursor = textPlaint->textCursor();
    if (!cursor.hasSelection())
        cursor.select(QTextCursor::WordUnderCursor);
    cursor.mergeCharFormat(format);
    textPlaint->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionItalic_I_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontItalic(ui->actionItalic_I->isChecked());
    mergeFormatOnWordOrSelection(fmt);
}

void MainWindow::on_actionUnderline_U_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(ui->actionUnderline_U->isChecked());
    mergeFormatOnWordOrSelection(fmt);
}


void MainWindow::on_action_Color_triggered()
{
    QColor col = QColorDialog::getColor(QColor(textPlaint->colorCount()), this);
    if (!col.isValid())
        return;
    QTextCharFormat fmt;
    fmt.setForeground(col);
    mergeFormatOnWordOrSelection(fmt);
    colorChanged(col);
}

void MainWindow::colorChanged(const QColor &c)
{
    QPixmap pix(16, 16);
    pix.fill(c);
    ui->action_Color->setIcon(pix);
}

void MainWindow::on_action_Left_triggered()
{
}

void MainWindow::on_actiontoUTF8_triggered()
{

    if(correctUnicode == "gb2312")
    {
        //QTextCodec *utf8 = QTextCodec::codecForName("UTF-8");
//        QTextCodec *gbk = QTextCodec::codecForName("GBK");
//        QTextCodec::setCodecForLocale(gbk);
//        QString str = gbk->toUnicode(textPlaint->toPlainText().toLocal8Bit());

//        textPlaint->clear();
//        textPlaint->setPlainText(str.toUtf8());

        correctUnicode = "UTF-8";
        int lengthNo = textPlaint->toPlainText().toLocal8Bit().size();
        statusBarInfoLabel.lengthNo->setText(QString::number(lengthNo));
        statusBarInfoLabel.codec->setText(correctUnicode);
    }
}

void MainWindow::on_actionGBK_triggered()
{
    if(correctUnicode == "UTF-8")
    {
//        QTextCodec *gbk = QTextCodec::codecForName("gb2312");
//        QTextCodec *utf8 = QTextCodec::codecForName("UTF-8");
//        QTextCodec::setCodecForLocale(utf8);
//        QString str = utf8->toUnicode(textPlaint->toPlainText().toLocal8Bit());
//        QByteArray gbk_bytes = gbk->fromUnicode(str);
        correctUnicode = "gb2312";
        int lengthNo = textPlaint->toPlainText().toLocal8Bit().size();
        statusBarInfoLabel.lengthNo->setText(QString::number(lengthNo));
        statusBarInfoLabel.codec->setText(correctUnicode);
    }
}


void MainWindow::getCorrectUnicode(QByteArray &str)
{
    QTextCodec::ConverterState state;
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    codec->toUnicode(str.constData(),str.size(),&state);
    if(state.invalidChars > 0)
    {
        correctUnicode  =  "gb2312";
    }
    else
    {
        correctUnicode  =  "UTF-8";
    }
}

void MainWindow::showStatusBarInfoLabel()
{
    ui->statusbar->addWidget(statusBarInfoLabel.textType);
    ui->statusbar->addWidget(statusBarInfoLabel.length);
    ui->statusbar->addWidget(statusBarInfoLabel.lengthNo);
    ui->statusbar->addWidget(statusBarInfoLabel.lines);
    ui->statusbar->addWidget(statusBarInfoLabel.linesNum);
    ui->statusbar->addWidget(statusBarInfoLabel.line);
    ui->statusbar->addWidget(statusBarInfoLabel.lineNo);
    ui->statusbar->addWidget(statusBarInfoLabel.col);
    ui->statusbar->addWidget(statusBarInfoLabel.colNo);
    ui->statusbar->addWidget(statusBarInfoLabel.codec);
}

void MainWindow::initStatusBarInfoLabel()
{
    statusBarInfoLabel.textType->setMinimumSize(120,25);
    statusBarInfoLabel.textType->setFrameShadow(QFrame::Sunken);
    statusBarInfoLabel.textType->setWordWrap(true);

    statusBarInfoLabel.length->setMinimumSize(60,25);
    statusBarInfoLabel.length->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.lengthNo->setMinimumSize(30,25);
    statusBarInfoLabel.lengthNo->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.lines->setMinimumSize(40,25);
    statusBarInfoLabel.lines->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.linesNum->setMinimumSize(30,25);
    statusBarInfoLabel.linesNum->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.line->setMinimumSize(40,25);
    statusBarInfoLabel.line->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.lineNo->setMinimumSize(30,25);
    statusBarInfoLabel.lineNo->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.col->setMinimumSize(40,25);
    statusBarInfoLabel.col->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.colNo->setMinimumSize(30,25);
    statusBarInfoLabel.colNo->setFrameShadow(QFrame::Sunken);

    statusBarInfoLabel.codec->setMinimumSize(50,25);
    statusBarInfoLabel.codec->setFrameShadow(QFrame::Sunken);
}

void MainWindow::on_actionUndo_U_triggered()
{
    emit undoSignal();
}

void MainWindow::textPlaintCursorChanged()
{
    QTextCursor cursor = textPlaint->textCursor();
    QTextLayout *pLayout = cursor.block().layout();
    int nCurpos = cursor.position()-cursor.block().position();
    int nTextLine = pLayout->lineForTextPosition(nCurpos).lineNumber()+ cursor.block().firstLineNumber();

    statusBarInfoLabel.linesNum->setText(QString::number(textPlaint->getBlockCount()));
    statusBarInfoLabel.lineNo->setText(QString::number(nTextLine+1));

    if(correctUnicode == "gb2312")
    {
        QTextCodec* gbk = QTextCodec::codecForName("gb2312");
        QTextCodec::setCodecForLocale(gbk);
        int lengthNo = textPlaint->toPlainText().toLocal8Bit().size();
        statusBarInfoLabel.lengthNo->setText(QString::number(lengthNo));
    }
    else
    {
        QTextCodec* utf8 = QTextCodec::codecForName("UTF-8");
        QTextCodec::setCodecForLocale(utf8);
        int lengthNo = textPlaint->toPlainText().toLocal8Bit().size();
        statusBarInfoLabel.lengthNo->setText(QString::number(lengthNo));
    }
    statusBarInfoLabel.colNo->setText(QString::number(cursor.columnNumber()));

}

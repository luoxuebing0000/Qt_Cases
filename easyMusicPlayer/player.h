#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QSystemTrayIcon>
#include <QEvent>
#include <QMenu>
#include <QAction>
#include "about.h"
#include <QWinThumbnailToolButton>
#include <QWinThumbnailToolBar>
#include <QStandardItemModel>
#include <QTableView>
#include <QDirModel>
#include <QDir>
#include <QStringListIterator>
#include <QMediaPlaylist>
#include <QTimer>



namespace Ui {
class player;
}

class player : public QWidget
{
    Q_OBJECT

public:
    explicit player(QWidget *parent = 0);
    ~player();
    QPoint drag;//定义一个释放点
    void mousePressEvent(QMouseEvent *);//窗口移动事件
    void mouseMoveEvent(QMouseEvent *);//窗口移动事件
    QMediaPlayer *myPlayer;
    QSystemTrayIcon *trayIcon;
protected:
    QAction *quitAction;
    QAction *aboutAction;
    QAction *nextAction;
    QAction *pauseAction;
    QAction *backAction;
    QWinThumbnailToolButton *backToolBtn;
    QWinThumbnailToolButton *pauseToolBtn;
    QWinThumbnailToolButton *nextToolBtn;
    QWinThumbnailToolBar *taskBar;
    QStandardItemModel *songListModel;
    QStringList path;
    QMediaPlaylist *playList;
    QTimer *timer;
    qint64 pausePosition;
    int currentIndex;


private slots:
    void on_closeBtn_clicked();
    void on_miniBtn_clicked();
    void on_pushButton_2_clicked();
    void on_pauseBtn_clicked();
    void on_volum_valueChanged(int value);
    void tuopan(QSystemTrayIcon::ActivationReason reason);
    void showAbout();
    void myPlayerSlot(QModelIndex index);
    void on_importBtn_clicked();
    void setPosition();
    void on_horizontalSlider_valueChanged(int value);
    void on_nextBtn_clicked();
    void on_backBtn_clicked();
    void mediaChange(int);

private:
    Ui::player *ui;
};

#endif // PLAYER_H

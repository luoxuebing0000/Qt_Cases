#ifndef FANCYBANNER_H
#define FANCYBANNER_H

#include <QWidget>

class FancyBannerPrivate;
class FancyBanner : public QWidget
{
    Q_OBJECT
public:
    explicit FancyBanner(QWidget *parent = nullptr);

    void addPage(QPixmap pixmap);
    void addPages(QList<QPixmap> pixmaps);

    void startAutoPlay();
    void stopAutoPlay();
    void setDelayTime(int msec, bool start = false);

    void setIndicatorFrontColor(QColor color);
    void setIndicatorBackColor(QColor color);

signals:
    void currentClicked(int index);

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    FancyBannerPrivate *d;
};

#endif // FANCYBANNER_H

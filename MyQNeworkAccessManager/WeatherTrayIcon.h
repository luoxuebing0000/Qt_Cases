#ifndef WEATHERTRAYICON_H
#define WEATHERTRAYICON_H

#include <QSystemTrayIcon>
#include <QNetworkReply>
#include <QAction>
#include <QMenu>
#include <QNetworkAccessManager>
#include <QCache>

class WeatherTrayIcon:public QSystemTrayIcon
{
    Q_OBJECT
public:
    explicit WeatherTrayIcon();
private slots:
    void requestXml();
    void readXml(QNetworkReply *reply);
    void readIcon(QNetworkReply *reply);
    void setAirport(QAction *action);
private:
    QMenu menu;
    QNetworkAccessManager *networkXmlAccess;
    QNetworkAccessManager *newworkIconAccess;
    QString airport;
    QCache<QUrl,QIcon> iconCache;
    int retryDelaySec;
};

#endif // WEATHERTRAYICON_H

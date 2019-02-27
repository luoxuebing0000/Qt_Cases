#include <QApplication>
#include "WeatherTrayIcon.h"
#include <QNetworkAccessManager>
#include <QNetworkProxy>



int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    app.setApplicationName(app.translate("main","Weather Tray Icon"));

    app.setOrganizationName("Atrac Ltd.");
    app.setOrganizationName("qtrac.eu");
    app.setQuitOnLastWindowClosed(false);
//    if(int error = enableNetworkProxying())
//        return error;
    WeatherTrayIcon weatherTrayIcon;
    weatherTrayIcon.show();
    return app.exec();
}


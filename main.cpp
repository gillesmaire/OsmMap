#include "mainwindow.h"
#include <QApplication>
#include <QSettings>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationDomain("Locator");
    a.setOrganizationName("Locator");
    QSettings::setDefaultFormat(QSettings::IniFormat);
    QSettings s;
    s.setValue("Lat",48.8995);
    s.setValue("Long",2.3301);
    MainWindow w;
    w.show();
    return a.exec();
}

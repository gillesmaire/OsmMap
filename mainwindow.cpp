#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>
#include <QQmlEngine>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_quick= new QQuickView;
    m_quick->setSource(QUrl("qrc:/OSMMap.qml"));
    QWidget *qWid =  QWidget::createWindowContainer(m_quick);
    qWid->setParent(ui->centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_quick;
}



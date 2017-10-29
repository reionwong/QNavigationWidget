#include "mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
    mainWidget = new QWidget;
    mainLayout = new QHBoxLayout(mainWidget);
    navigationWidget = new QNavigationWidget;

    navigationWidget->addItem("11111");
    navigationWidget->addItem("22222");
    navigationWidget->addItem("33333");
    navigationWidget->addItem("44444");

    mainLayout->addWidget(navigationWidget);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

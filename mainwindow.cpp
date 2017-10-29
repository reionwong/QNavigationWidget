#include "mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
    mainWidget = new QWidget;
    mainLayout = new QHBoxLayout(mainWidget);
    navigationWidget = new QNavigationWidget;

    mainLayout->addWidget(navigationWidget);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

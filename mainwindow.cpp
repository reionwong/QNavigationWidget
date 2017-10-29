#include "mainwindow.h"

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
    mainWidget = new QWidget;
    rightWidget = new QWidget;
    mainLayout = new QHBoxLayout(mainWidget);
    navigationWidget = new QNavigationWidget;

    rightWidget->setFixedWidth(600 - navigationWidget->width());
    navigationWidget->addItem("常规");
    navigationWidget->addItem("画面");
    navigationWidget->addItem("字幕");
    navigationWidget->addItem("下载");
    navigationWidget->addItem("其他");
    navigationWidget->addItem("关于");

    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->addWidget(navigationWidget);
    mainLayout->addWidget(rightWidget);
    
    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{
}

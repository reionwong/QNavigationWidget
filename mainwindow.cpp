#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QMainWindow *parent) : QMainWindow(parent)
{
    mainWidget = new QWidget;
    rightWidget = new QWidget;
    rightLayout = new QVBoxLayout(rightWidget);
    mainLayout = new QHBoxLayout(mainWidget);
    navigationWidget = new QNavigationWidget;
    tipsLabel = new QLabel("Item: 0");

    rightWidget->setFixedWidth(600 - navigationWidget->width());
    navigationWidget->setRowHeight(50);
    navigationWidget->addItem("常规");
    navigationWidget->addItem("画面");
    navigationWidget->addItem("字幕");
    navigationWidget->addItem("下载");
    navigationWidget->addItem("其他");
    navigationWidget->addItem("关于");

    rightLayout->addWidget(tipsLabel, 0, Qt::AlignCenter);
    
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->addWidget(navigationWidget);
    mainLayout->addWidget(rightWidget);
    
    setCentralWidget(mainWidget);

    connect(navigationWidget, &QNavigationWidget::currentItemChanged, this, [=](const int &current){
        tipsLabel->setText("Item: " + QString::number(current));
    });
}

MainWindow::~MainWindow()
{
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include "qnavigationwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QMainWindow *parent=0);
    ~MainWindow();

private:
    QWidget *mainWidget;
    QWidget *rightWidget;
    QHBoxLayout *mainLayout;
    QVBoxLayout *rightLayout;
    QNavigationWidget *navigationWidget;
    QLabel *tipsLabel;
};	

#endif

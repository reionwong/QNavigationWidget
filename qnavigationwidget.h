#ifndef QNAVIGATIONWIDGET_H
#define QNAVIGATIONWIDGET_H

#include <QWidget>

class QNavigationWidget : public QWidget
{
    Q_OBJECT
    
public:
    QNavigationWidget(QWidget *parent=0);
    ~QNavigationWidget();

protected:
    void paintEvent(QPaintEvent *);

private:
    QList<QString> listItems;
    QString backgroundColor;
};

#endif

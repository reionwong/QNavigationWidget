#ifndef QNAVIGATIONWIDGET_H
#define QNAVIGATIONWIDGET_H

#include <QWidget>

class QNavigationWidget : public QWidget
{
    Q_OBJECT
    
public:
    QNavigationWidget(QWidget *parent=0);
    ~QNavigationWidget();

    void addItem(const QString &title);

protected:
    void paintEvent(QPaintEvent *);

private:
    QList<QString> listItems;
    QList<QString> selectItems;
    QString backgroundColor;
    int rowHeight;
};

#endif

#ifndef QNAVIGATIONWIDGET_H
#define QNAVIGATIONWIDGET_H

#include <QWidget>
#include <QMouseEvent>

class QNavigationWidget : public QWidget
{
    Q_OBJECT
    
public:
    QNavigationWidget(QWidget *parent=0);
    ~QNavigationWidget();

    void addItem(const QString &title);

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    QList<QString> listItems;
    QList<QString> selectItems;
    QString backgroundColor;
    QString selectedColor;
    int rowHeight;

signals:
    void currentItemChanged(const int &index);
};

#endif

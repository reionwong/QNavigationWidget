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
    void setWidth(const int &width);
    void setBackgroundColor(const QString &color);
    void setSelectColor(const QString &color);
    void setRowHeight(const int &height);

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    QList<QString> listItems;
    QString backgroundColor;
    QString selectedColor;
    int rowHeight;
    int currentIndex;

signals:
    void currentItemChanged(const int &index);
};

#endif

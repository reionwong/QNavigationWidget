#include "qnavigationwidget.h"
#include <QPainter>

QNavigationWidget::QNavigationWidget(QWidget *parent) : QWidget(parent)
{
    backgroundColor = "#E4E4E4";
    rowHeight = 40;

    setMouseTracking(true);
    setFixedWidth(200);
}

QNavigationWidget::~QNavigationWidget()
{
}

void QNavigationWidget::addItem(const QString &title)
{
    listItems << title;

    repaint();
}

void QNavigationWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // Draw background color.
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(backgroundColor));
    painter.drawRect(rect());

    // Draw Items
    painter.setPen(QColor("#202020"));
    
    int count = 0;
    for (const QString &str : listItems) {
        painter.drawText(QRect(0, count * rowHeight, width(), rowHeight), Qt::AlignCenter, str);

        ++count;
    }
}

void QNavigationWidget::mouseMoveEvent(QMouseEvent *e)
{
    
}

void QNavigationWidget::mousePressEvent(QMouseEvent *e)
{
    
}

void QNavigationWidget::mouseReleaseEvent(QMouseEvent *e)
{
    
}

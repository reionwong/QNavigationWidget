#include "qnavigationwidget.h"
#include <QPainter>

QNavigationWidget::QNavigationWidget(QWidget *parent) : QWidget(parent)
{
    backgroundColor = "#E4E4E4";
}

QNavigationWidget::~QNavigationWidget()
{
}

void QNavigationWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // Draw background color.
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(backgroundColor));
    painter.drawRect(rect());
}

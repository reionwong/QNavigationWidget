#include "qnavigationwidget.h"
#include <QPainter>

QNavigationWidget::QNavigationWidget(QWidget *parent) : QWidget(parent)
{
    
}

QNavigationWidget::~QNavigationWidget()
{
}

void QNavigationWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    
}

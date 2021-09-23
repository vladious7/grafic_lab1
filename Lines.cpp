#include <QPainter>
#include "Lines.h"

Lines::Lines(QWidget *parent)
    : QWidget(parent) {}

void Lines::paintEvent(QPaintEvent *e) {

  Q_UNUSED(e);

  QPainter qp(this);
  drawLines(&qp);
}

void Lines::drawLines(QPainter *qp) {
  height = 800;
  width = 800;
QWidget::setFixedSize(height, width);
  QPen pen(Qt::black, 1, Qt::DashLine);
  qp->setPen(pen);
  for (int i = 0; i < 800; i += CELL) {
    qp->drawLine(0, 0 + i, 800, 0 + i);
    qp->drawLine(0 + i, 0, 0 + i, 800);
  }
}
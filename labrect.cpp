#include "labrect.h"
#include "ui_labrect.h"

labrect::labrect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::labrect)
{
    ui->setupUi(this);
}

void labrect::paintEvent(QPaintEvent *event)
{
    QPainter * painter = new QPainter (this);
    painter->fillRect(10,70,981,611,Qt::yellow);
}
labrect::~labrect()
{
    delete ui;
}

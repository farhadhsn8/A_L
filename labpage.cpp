#include "labpage.h"
#include "ui_labpage.h"

labpage::labpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::labpage)
{
    ui->setupUi(this);
}

void labpage::paintEvent(QPaintEvent *event)
{
    QPainter * painter =new QPainter (this);
    painter->fillRect(0,0,861,591,Qt::yellow);
}

void labpage::createlab()
{
    mach = new AL::machine*();
}
labpage::~labpage()
{
    delete ui;
    delete mach;
}

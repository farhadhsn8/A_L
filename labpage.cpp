#include "labpage.h"
#include "ui_labpage.h"
#include "dfam.h"
#include "turm.h"
labpage::labpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::labpage)
{
    ui->setupUi(this);
}

void labpage::paintEvent(QPaintEvent *event)
{
    QPainter * painter =new QPainter (this);
    painter->fillRect(0,0,861,591,Qt::blue);
    dmach->draw(painter);

}

void labpage::createlab()
{
    dmach = new AL::dfam();

}
labpage::~labpage()
{
    delete ui;

    delete dmach;
}

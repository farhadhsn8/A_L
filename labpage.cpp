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
    painter->fillRect(0,0,861,591,Qt::white);
    dmach->draw(painter);
    delete painter;

}

void labpage::createlab()
{
    dmach=new AL::dfam;
    selectedobject =NULL;
}
void labpage::mousePressEvent(QMouseEvent * event)
{
    auto p = mapFromGlobal(QCursor::pos());//return position of click
    selectedobject = dmach->getselectedobject(AL::vectorr (p.x(),p.y()));
}

void labpage::mouseMoveEvent(QMouseEvent *event)
{
    if(selectedobject)
    {
        auto p = mapFromGlobal(QCursor::pos());//return position of click
        selectedobject->setposition(AL::vectorr(p.x(),p.y()));
        update();
    }
}

labpage::~labpage()
{
    delete ui;
    delete dmach;

}

#include "labpage.h"
#include "ui_labpage.h"
#include "dfam.h"
#include "turm.h"
labpage::labpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::labpage)
{
    ui->setupUi(this);
    selectedvertex1=NULL;
    selectedvertex2=NULL;
    switchofvertex =1;
}

void labpage::paintEvent(QPaintEvent *event)
{
    QPainter * painter =new QPainter (this);//vazifeye draw
    painter->setRenderHint(QPainter::Antialiasing,true);//saaf konande khat
    painter->fillRect(0,0,861,591,Qt::white);//rasm safhe
    dmach->draw(painter);//chandrikhti
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
    //pointofpress = mapFromGlobal(QCursor::pos());
    //selectedvertex = dmach->getselectedvertex(AL::vectorr (p.x(),p.y()));

    if(switchofvertex==1 )//yaani alan nobat avvali mibashad . pas avval avvali baad dovvomi
    {
        pointofpress1 = mapFromGlobal(QCursor::pos());
        selectedvertex1 = dmach->getselectedvertex(AL::vectorr (p.x(),p.y()));
        switchofvertex=2;
    }
    else
    {
        if (switchofvertex==2)//yaani alan nobat dovvomi mibashad . pas avval dovvomi baad avvali
        {
            pointofpress2 = mapFromGlobal(QCursor::pos());//noqte press shode
            selectedvertex2 = dmach->getselectedvertex(AL::vectorr (p.x(),p.y()));//agar vertex select shode bood asign mishavad
            switchofvertex=1;
        }
    }

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

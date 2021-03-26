#include "mainlab.h"
#include "ui_mainlab.h"
#include "dfaedge.h"
#include "dfavertex.h"
#include "tedge.h"
#include "tvertex.h"
#include <typeinfo>
mainlab::mainlab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainlab)
{
    ui->setupUi(this);
    ui->labwidget->createlab();
}

mainlab::~mainlab()
{
    delete ui;
}

void mainlab::on_addvbtn_clicked()
{
    AL::dfavertex * dv =new AL::dfavertex();
    dv->setposition(AL::vectorr(50,50));
    dv->setmood(0);
    ui->labwidget->dmach->dvertexes.push_back(dv);
    ui->labwidget->update();
}

void mainlab::on_addebtn_clicked()
{
    //auto p = mapFromGlobal(QCursor::pos());//return position of click
    //selectedobject = dmach->getselectedobject(AL::vectorr (p.x(),p.y()));
    AL::dfavertex * ck1 ;
    AL::dfavertex * ck2 ;
    QPoint p;
    QPoint q;

    if(ui->labwidget->switchofvertex == 1)
    {
        ck1=ui->labwidget->selectedvertex1;
        p =ui->labwidget->pointofpress1;

        ck2=ui->labwidget->selectedvertex2;
        q =ui->labwidget->pointofpress2;
    }
    if(ui->labwidget->switchofvertex == 2)
    {
        ck2=ui->labwidget->selectedvertex1;
         q =ui->labwidget->pointofpress1;

        ck1=ui->labwidget->selectedvertex2;
         p =ui->labwidget->pointofpress2;
    }

    if(ck1 )
    {
        if(ck2)
        {
            AL::dfaedge * de =new AL::dfaedge();
            de->setfrom(ck1);
            de->setto(ck2);
            if(!ck1->getto0())
            {
                ck1->setto0(de);
            }
            else
                if (! ck1->getto1())
                {
                    ck1->setto1(de);
                }

             de->setposition(AL::vectorr((p.x()+q.x())/2,(p.y()+q.y())/2));
             AL::vectorr e = AL::vectorr(q.x()- p.x(),q.y()-p.y());
             de->setlength(e.size());
             de->setnormal(AL::vectorr(-1*e.gety(),e.getx()));
             ui->labwidget->dmach->dedges.push_back(de);
             ui->labwidget->update();
        }
    }
   // AL::dfaedge * de =new AL::dfaedge();
  //  de->setposition(AL::vectorr(50,150));
   // de->setlength(50);
   // de->setnormal(AL::vectorr(-8,3));
   // ui->labwidget->dmach->dedges.push_back(de);
   // ui->labwidget->update();
}



void mainlab::on_inputbtn_clicked()
{
    QString str;
    str=ui->textedit->toPlainText();
    std::string s;
    s=str.toStdString();
   ui->labwidget->dmach->setinputs(s);
}

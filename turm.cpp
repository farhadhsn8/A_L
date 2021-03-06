#include "turm.h"
using namespace std;
using namespace AL;

void turm::settinputs(string s)
{
    tinputs=s;
}

string turm::gettinputs()
{
    return tinputs;
}

void turm::add_tedge()
{
    tedge * a =new tedge();
    tedges.push_back(a);

}

void turm::add_tvertex()
{
    tvertex * a =new tvertex();
    tvertexes.push_back(a);
}

void turm::delete_tedge(tedge * a)
{
    for (int i=0; i<tedges.size();i++)
    {
        if (tedges[i]==a)
        {
            tedges[i]->deleteobj();
            tedges[i]=NULL;
        }
    }
}

void turm::delete_tvertex(tvertex * c)
{
    for (int i=0;i<tvertexes.size();i++)
    {
        if (tvertexes[i]==c)
        {
            tvertexes[i]->deleteobj();
            tvertexes[i]=NULL;
        }
    }
}

void turm::settstart(tvertex * v)
{
    for (auto verr : tvertexes)
        {
          if (verr->getmood()==1)
          {
            verr->setmood(0);
          }
        }
        v->setmood(1);
}

tvertex * turm::gettstart()
{
    for (auto ve : tvertexes)
    {
        if (ve->getmood()==1)
        {
            return ve;
        }
    }
}

void turm::meminit()//30 taye avval ### ... baad az voroodi hm ###
{
    for (int i=0;i<30;i++)
        mem[i]='#';
    for (int i=0;i<tinputs.size();i++)
        mem[i+30]=tinputs[i];
    for (int i=30+tinputs.size();i<150;i++)
        mem[i]='#';
}

bool turm::gettresult()
{
    int head =30;
    tvertex * v =turm::gettstart();
    tedge * e ;
    int counter=0;
    while (v->getmood() != 2 && counter <2500)
    {
        counter++;
        bool changing=0;
        for (int i=0 ; i< v->toedges.size(); i++)//yaal ha tak tak check mishavand
        {
            if (mem[head] ==v->toedges[i]->getc1())//agar avvalin vazn ba hafeze yki bood
            {
                changing=1;//avaz shode
                e=v->toedges[i];
                mem[head] = e->getc2();
                if ( e->getc3()=='L' || e->getc3()=='l')//chap raftn
                    head--;
                if ( e->getc3()=='R' || e->getc3()=='r')//rast raftn
                    head++;
                v=e->getto();
                break;
            }
        }
        if (changing==0)//halt dar noqteE bjoz payan
            return 0;
        if (v->getmood()==2)//halt dar noqteye payan
            return 1;
    }
    if (v->getmood()==2)//halt dar noqteye payan
        return 1;
    return 0;
}//22:37----24/4/1398

void turm::draw(QPainter *painter)
{
    //draw dedges
    for (auto te : tedges)
    {
        painter->setPen(QPen(Qt::green,3));
        te->draw(painter);
    }
    //draw dvertexes
    for (auto tv : tvertexes)
    {
        if (tv->getmood()==0)
            painter->setPen(QPen(Qt::blue,4));
        if (tv->getmood()==1)
            painter->setPen(QPen(Qt::red,6));
        if (tv->getmood()==2)
            painter->setPen(QPen(Qt::black,6));
        tv->draw(painter);
    }
}






























#include "dfam.h"
using namespace std;
using namespace AL;

void dfam::setinputs(string s)
{
    inputs=s;
}

string dfam::getinputs()
{
    return inputs;
}

void dfam::setstart(dfavertex * v)
{
    for (auto verr : dvertexes)
        {
          if (verr->getmood()==1)
          {
            verr->setmood(0);
          }
        }
        v->setmood(1);
}

dfavertex * dfam::getstart()
{
    for (auto verr : dvertexes)
        {
          if (verr->getmood()==1)
          {
            return verr;
          }
        }
}

void dfam::add_dedge()
{
    dfaedge * a =new dfaedge();
    dedges.push_back(a);

}

void dfam::add_dvertex()
{
    dfavertex * a =new dfavertex();
    dvertexes.push_back(a);

}

void dfam::delete_dedge(dfaedge * a)
{
    for (int i=0; i<dedges.size();i++)
    {
        if (dedges[i]==a)
        {
            dedges[i]->deleteobj();
            dedges[i]=NULL;
        }
    }
}

void dfam::delete_dvertex(dfavertex * c)
{
    for (int i=0;i<dvertexes.size();i++)
    {
        if (dvertexes[i]==c)
        {
            dvertexes[i]->deleteobj();
            dvertexes[i]=NULL;
        }
    }
}

bool dfam::getresult()
{
    string s=dfam::getinputs();
    dfavertex * v = dfam::getstart();
    dfaedge * e;

    for (int i=0;i<s.size();i++)//voroodi b voroodi jlo mire
    {
        bool changestate=0;
        if (s[i]==v->getto0()->getdweight())//agar ba voroodi yki bood vared yaal mishavad
        {
            e=v->getto0();
            v=e->getto();
            changestate=1;
        }
        if (s[i]==v->getto1()->getdweight() && changestate==0)//agar ba voroodi yki bood vared yaal mishavad
        {
            e=v->getto1();
            v=e->getto();
            changestate=1;
        }
        if (changestate ==0)//halt dar noqteE bjoz final
            return 0;
        if(changestate==1 && (i==(s.size()-1)))
        {
            if (v->getmood()==2)//final
                return 1;
            if (v->getmood()!=2)//not final
                return 0;
        }
    }
}

object * dfam::getselectedobject(vectorr point)//object select shode ra pas midehad
{
    for (auto de : dedges)
    {
        if (de->satisfy(point))
        {
            return de;
        }
    }
    for (auto dv : dvertexes)
    {
        if (dv->satisfy(point))
        {
            return dv;
        }
    }
    return NULL;
}

dfavertex * dfam::getselectedvertex(vectorr point)//vertex select shode ra pas midehad
{
    for (auto dv : dvertexes)
    {
        if (dv->satisfy(point))
        {
            return dv;
        }
    }
    return NULL;
}

void dfam::draw(QPainter *painter)
{
    //draw dedges

    for (auto de : dedges)
    {
        painter->setPen(QPen(Qt::green,3));
        de->draw(painter);
    }
    //draw dvertexes
    for (auto dv : dvertexes)
    {
        if (dv->getmood()==0)
            painter->setPen(QPen(Qt::blue,4));
        if (dv->getmood()==1)
            painter->setPen(QPen(Qt::red,6));
        if (dv->getmood()==2)
            painter->setPen(QPen(Qt::black,6));
        dv->draw(painter);
    }

}



















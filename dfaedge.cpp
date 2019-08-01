#include "dfaedge.h"
using namespace AL;
bool dfaedge::satisfy(vectorr)
{
    return true;
}
char dfaedge::getdweight()
{
    return dweight;
}
void dfaedge::setdweight(char c)
{
    dweight=c;
}
void dfaedge::setfrom(dfavertex * f)
{
    from=f;
}
dfavertex* dfaedge::getfrom()
{
    return from;
}
void dfaedge::setto(dfavertex * t)
{
    to =t;
}
dfavertex* dfaedge::getto()
{
    return to;
}

void dfaedge::setposition1(vectorr bb)
{
    position1.setx(0);
    position1.sety(0);
    double circle = ((bb.getx()- getfrom()->getposition().getx())
                     *(bb.getx()- getfrom()->getposition().getx()))+
            ((bb.gety()-getfrom()->getposition().gety())*
             (bb.gety()-getfrom()->getposition().gety()));
    if(circle <= 324)
    {
        position1 = bb;
    }

}
vectorr dfaedge::getposition1()
{
    return position1;
}

void dfaedge::setposition2(vectorr bb)
{
    position2.setx(0);
    position2.sety(0);
    double circle = ((bb.getx()- getto()->getposition().getx())
                     *(bb.getx()- getto()->getposition().getx()))+
            ((bb.gety()-getto()->getposition().gety())*
             (bb.gety()-getto()->getposition().gety()));
    if(circle <= 324)
    {
        position1 = bb;
    }
}
vectorr dfaedge::getposition2()
{
    return position2;
}

void dfaedge::draw(QPainter * painter)
{
    if (position1.getx() != 0  && position1.gety() != 0 &&position2.getx() != 0  && position2.gety() != 0)
    {
        painter->drawLine(getposition1().getx(),getposition1().gety(),getposition2().getx(),getposition2().gety());
    }

}

























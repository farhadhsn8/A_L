#include "dfavertex.h"
using namespace AL;
void dfavertex::setto0(dfaedge * a)
{
    to0=a;
}
dfaedge * dfavertex::getto0()
{
    return to0;
}
void dfavertex::setto1(dfaedge * a)
{
    to1=a;
}
dfaedge * dfavertex::getto1()
{
    return to1;
}


bool dfavertex::satisfy(vectorr a)
{
    vectorr p;
    p.setx(getposition().getx() + 18);
    p.sety(getposition().gety() + 18);
    if ((a - p).size() < 18)
        return true;
      return false;

}

void dfavertex::draw(QPainter *painter)
{
    painter->drawEllipse(getposition().getx(),getposition().gety(),36,36);
}

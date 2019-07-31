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

vectorr dfavertex::getposition();
void dfavertex::setposition(vectorr);

void dfavertex::draw(QPainter *painter)
{
    painter->drawEllipse(getposition().getx(),getposition().gety(),35,35);
}

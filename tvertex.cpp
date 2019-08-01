#include "tvertex.h"
using namespace std;
using namespace AL;

void tvertex::settoedges(tedge * te)
{
    toedges.push_back(te);
}
vectorr tvertex::getposition()
{
    return position;
}
void tvertex::setPosition(vectorr aa)
{
    position=aa;
}
void tvertex::draw(QPainter *painter)
{
    painter->drawEllipse(getposition().getx(),getposition().gety(),36,36);
}

#include "tvertex.h"
using namespace std;
using namespace AL;

void tvertex::settoedges(tedge * te)
{
    toedges.push_back(te);
}

bool tvertex::satisfy(vectorr a)
{
    vectorr p;
    p.setx(getposition().getx() + 18);
    p.sety(getposition().gety() + 18);
    if ((a - p).size() < 18)
        return true;
    return false;

}
void tvertex::draw(QPainter *painter)
{
    painter->drawEllipse(getposition().getx(),getposition().gety(),36,36);
}

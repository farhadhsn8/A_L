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
bool tvertex::satisfy(vectorr a)
{
    double s= a.getx() - getposition().getx();
    double t= a.gety() - getposition().gety();
    double circle;
    circle = s*s + t*t;
    if (circle <= 324)
        return 1;
    else
        return 0;

}
void tvertex::draw(QPainter *painter)
{
    painter->drawEllipse(getposition().getx(),getposition().gety(),36,36);
}

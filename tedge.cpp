#include "tedge.h"
using namespace AL;
bool tedge::satisfy(vectorr aa)
{
    double m,a,b,c,up,down;
    m = (position2.gety() - position1.gety()) / (position2.getx() -  position1.getx());
    b = -1;
    a=m;
    c= -1 * m * position1.getx() +  position1.gety();
    up= (a * aa.getx()) +( b* aa.gety()) + c;
    down = sqrt(a*a + b*b);
    double dist;
    dist = up / down;
    if (dist < 0)
        dist *= -1;
    if (dist < 2)
        return 1;
    else
        return 0;
}

char tedge::getc1()
{
    return c1;
}

char tedge::getc2()
{
    return c2;
}

char tedge::getc3()
{
    return c3;
}

void tedge::setc1(char a)
{
    c1=a;
}

void tedge::setc2(char a)
{
    c2=a;
}

void tedge::setc3(char a)
{
    if (a=='R'|| a=='r' ||a=='L' ||a=='l' )
        c3=a;
}
void tedge::setfrom(tvertex * f)
{
    from=f;
}
tvertex* tedge::getfrom()
{
    return from;
}
void tedge::setto(tvertex * t)
{
    to =t;
}
tvertex* tedge::getto()
{
    return to;
}
void tedge::setposition1(vectorr bb)
{

        position1 = bb;

}
vectorr tedge::getposition1()
{
    return position1;
}

void tedge::setposition2(vectorr bb)
{    
        position2 = bb;
}
vectorr tedge::getposition2()
{
    return position2;
}

void tedge::draw(QPainter * painter)
{
    if (position1.getx() != 0  && position1.gety() != 0 &&position2.getx() != 0  && position2.gety() != 0)
    {
        painter->drawLine(getposition1().getx(),getposition1().gety(),getposition2().getx(),getposition2().gety());
    }

}

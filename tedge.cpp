#include "tedge.h"
using namespace AL;
bool tedge::satisfy(vectorr u)
{
    vectorr s = surface();
      double proj = (u - getposition()).dot(s);
      if (proj < -getlength() / 2 || proj > getlength() / 2)
        return false;
      vectorr a1 = getposition() + s * proj;
      if ((a1 - u).size() > 5)
        return false;
      return true;
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

vectorr tedge::getnormal()
{
    return normal;
}


void tedge::setnormal(vectorr u)
{
    normal =u.normalize();
}

vectorr tedge::surface()
{
    return vectorr(-normal.gety(), normal.getx());
}

double tedge::getlength() { return length; }

void tedge::setlength(double len) { length = len; }

void tedge::draw(QPainter * painter)
{
    vectorr s = surface();
    vectorr p1 = getposition() + s * (getlength() / 2);
    vectorr p2 = getposition() - s * (getlength() / 2);
    painter->drawLine(p1.getx(), p1.gety(), p2.getx(), p2.gety());

}

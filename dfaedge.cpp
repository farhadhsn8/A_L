#include "dfaedge.h"
#include <math.h>
#include "dfam.h"
using namespace AL;
bool dfaedge::satisfy(vectorr u)
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

vectorr dfaedge::getnormal()
{
    return normal;
}


void dfaedge::setnormal(vectorr u)
{
    normal =u.normalize();
}

vectorr dfaedge::surface()
{
    return vectorr(-normal.gety(), normal.getx());
}

double dfaedge::getlength() { return length; }

void dfaedge::setlength(double len) { length = len; }

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


void dfaedge::draw(QPainter * painter)
{
    vectorr s = surface();
    vectorr p1 = getposition() + s * (getlength() / 2);
    vectorr p2 = getposition() - s * (getlength() / 2);
    painter->drawLine(p1.getx(), p1.gety(), p2.getx(), p2.gety());

}

























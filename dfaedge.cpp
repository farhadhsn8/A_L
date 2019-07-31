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
    position1 = bb;
}
vectorr dfaedge::getposition1()
{
    return position1;
}

void dfaedge::setposition2(vectorr bb)
{
    position2 = bb;
}
vectorr dfaedge::getposition2()
{
    return position2;
}

void dfaedge::draw(QPainter * painter)
{

}

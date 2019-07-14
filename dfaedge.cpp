#include "dfaedge.h"
using namespace AL;
bool dfaedge::satisfy(Vectorr)
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

#include "vectorr.h"
#include <iostream>
using namespace AL;
using namespace std;

double vectorr::getx()
{
    return x;
}
double vectorr::gety()
{
    return y;
}

void vectorr::setx(double xx)
{
    x = xx;
}

void vectorr::sety(double yy)
{
    y = yy;
}
vectorr vectorr::neg()
{
    return vectorr(-x, -y);
}
vectorr vectorr::operator-()
{
    return vectorr(-x, -y);
}

double vectorr::size()
{
    return sqrt(x * x + y * y);
}


vectorr vectorr::sub(vectorr u)
{
    return vectorr (x-u.x,y-u.y);
}

vectorr vectorr::operator-(vectorr u)
{
    return sub(u);
}
bool vectorr::isZero()
{
    return size() < 0.001;
}

std::string vectorr::toString()
{
  std::string result =
      "(" + std::to_string(x) + "," + std::to_string(y) + ")";
  return result;
}


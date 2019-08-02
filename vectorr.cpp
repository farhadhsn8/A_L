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
vectorr vectorr::scale(double a)
{
    return vectorr(a * x, a * y);
}

vectorr vectorr::normalize()
{
  double s = size();
  return scale(1 / s);
}
vectorr vectorr::neg()
{
    return vectorr(-x, -y);
}
vectorr vectorr::operator-()
{
    return vectorr(-x, -y);
}

vectorr vectorr::operator*(double a)
{
    return scale(a);
}
double vectorr::size()
{
    return sqrt(x * x + y * y);
}


vectorr vectorr::sub(vectorr u)
{
    return vectorr (x-u.x,y-u.y);
}

vectorr vectorr::add(vectorr u)
{
    return vectorr(x + u.getx(), y + u.gety());
}
vectorr vectorr::operator+(vectorr u)
{
    return add(u);
}
vectorr vectorr::operator-(vectorr u)
{
    return sub(u);
}
bool vectorr::isZero()
{
    return size() < 0.001;
}
double vectorr::dot(vectorr u)
{
    return x * u.getx() + y * u.gety();
}


std::string vectorr::toString()
{
  std::string result =
      "(" + std::to_string(x) + "," + std::to_string(y) + ")";
  return result;
}


#include "vertex.h"
#include <iostream>
#include <string>
using namespace std;
using namespace AL;
void vertex::draw(QPainter * painter)
{

}

void vertex::deleteobj()
{

}
void vertex::setname(string s)
{

    name=s;
}
string vertex::getname()
{
    return name;
}
void vertex::setmood (int a)
{
    mood =a;
}
int vertex::getmood()
{
    return mood;
}


#include "object.h"

using namespace AL;

vectorr object::getposition()
{
    return position;
}

void object::setPosition(vectorr u)
{
     position = u;
}

void object::draw(QPainter * painter)
{

}

void object::deleteobj()
{

}

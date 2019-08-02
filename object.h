#ifndef OBJECT_H
#define OBJECT_H
#include "vectorr.h"
#include <QPainter>
namespace AL
{
class object
{
private:
    vectorr position;
public:
    object()
    {

    }
    vectorr getposition();
    void setposition(vectorr);
    virtual void draw(QPainter *);
    virtual void deleteobj();
    virtual bool satisfy (vectorr) = 0;
};
}


#endif // OBJECT_H

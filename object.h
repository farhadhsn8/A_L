#ifndef OBJECT_H
#define OBJECT_H
#include "vectorr.h"
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
    void setPosition(vectorr);
    virtual void draw();
    virtual void deleteobj();
    virtual bool satisfy (vectorr) = 0;
};
}


#endif // OBJECT_H

#ifndef EDGE_H
#define EDGE_H
#include "object.h"
#include "vertex.h"
namespace AL
{
class vertex;
class edge : public object
{
public:
    edge()
    {
        from=NULL;
        to=NULL;
    }
    void setfrom (vertex *);
    vertex * getfrom ();
    void setto (vertex *);
    vertex * getto ();
    virtual void draw();
    virtual void deleteobj();
    virtual bool satisfy (Vectorr) = 0;
private:
    vertex * from;
    vertex * to;

};
}
#endif // EDGE_H

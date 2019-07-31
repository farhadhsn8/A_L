#ifndef TVERTEX_H
#define TVERTEX_H
#include "vertex.h"
#include <vector>
#include "tedge.h"
namespace AL
{
class tedge;
class tvertex : public vertex
{
public:
    tvertex()
    {

    }
    void settoedges (tedge *);
    std::vector < tedge * > toedges;
    void draw(QPainter * painter);
private:


};
}
#endif // TVERTEX_H

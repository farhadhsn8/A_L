#ifndef TVERTEX_H
#define TVERTEX_H
#include "vertex.h"
#include <vector>
#include "tedge.h"
namespace AL
{
class tvertex : public vertex
{
public:
    tvertex();
    void settoedges (tedge *);
private:
    std::vector < tedge * > toedges;

};
}
#endif // TVERTEX_H

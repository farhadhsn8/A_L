#ifndef DFAEDGE_H
#define DFAEDGE_H
#include "edge.h"
#include "dfavertex.h"
namespace AL
{
class dfavertex;
class dfaedge : public edge
{
public:
    dfaedge()
    {

    }
    void setfrom (dfavertex *);
    dfavertex * getfrom ();
    void setto (dfavertex *);
    dfavertex * getto ();
    void setdweight(char='0');
    char getdweight();
    bool satisfy(vectorr);
    void draw(QPainter * painter);
    void setposition1(vectorr);
    vectorr getposition1 ();
    void setposition2(vectorr);
    vectorr getposition2();
private:
    char dweight;
    dfavertex * from;
    dfavertex * to;
    vectorr position1;
    vectorr position2;
};
}
#endif // DFAEDGE_H

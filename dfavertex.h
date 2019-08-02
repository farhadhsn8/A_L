#ifndef DFAVERTEX_H
#define DFAVERTEX_H
#include "vertex.h"
#include "dfaedge.h"
namespace AL
{
class dfaedge;
class dfavertex : public vertex
{
public:
    dfavertex(dfaedge * a=NULL ,dfaedge * b=NULL , vectorr c=vectorr(120,10)) : to0(a),to1(b),position(c)
    {

    }
    void setto0 (dfaedge *);
    dfaedge * getto0 ();
    void setto1 (dfaedge *);
    dfaedge * getto1 ();
    void draw(QPainter * painter);
    vectorr getposition();
    void setposition(vectorr);
private:
    dfaedge * to0;
    dfaedge * to1;
    vectorr position;
};
}
#endif // DFAVERTEX_H

#ifndef TEDGE_H
#define TEDGE_H
#include "edge.h"
#include "tvertex.h"
#include "vectorr.h"
namespace AL
{
class tvertex;
class tedge : public edge
{
public:

    tedge(tvertex * a =NULL, tvertex* b =NULL,char c = ' ',char d= ' ',char e =' ',vectorr f =vectorr (10,10),vectorr g =vectorr (100,10))
        :from(a),to(b),c1(c),c2(d),c3(e),position1(f),position2(g)
    {

    }
    bool satisfy(vectorr );
    void setc1 (char);
    char getc1 ();
    void setc2 (char);
    char getc2 ();
    void setc3 (char);
    char getc3 ();
    void setfrom (tvertex *);
    tvertex * getfrom ();
    void setto (tvertex *);
    tvertex * getto ();
    tvertex * from;
    tvertex * to;
    void setposition1(vectorr);
    vectorr getposition1 ();
    void setposition2(vectorr);
    vectorr getposition2();
    void draw(QPainter *painter);

private:
    char c1;
    char c2;
    char c3;
    vectorr position1;
    vectorr position2;
};
}
#endif // TEDGE_H

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
    tedge()
    {

    }
    bool satisfy(vectorr);
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

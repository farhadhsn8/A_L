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

    tedge(tvertex * a =NULL, tvertex* b =NULL,char c = ' ',char d= ' ',char e =' ')
        :from(a),to(b),c1(c),c2(d),c3(e)
    {

    }
    vectorr getnormal();
    void setnormal(vectorr);
    vectorr surface();
    double getlength();
    void setlength (double);
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
    void draw(QPainter *painter);

private:
    char c1;
    char c2;
    vectorr normal;
    double length;
    char c3;

};
}
#endif // TEDGE_H

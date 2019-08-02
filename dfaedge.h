#ifndef DFAEDGE_H
#define DFAEDGE_H
#include "edge.h"
#include "dfavertex.h"
#include "vectorr.h"
namespace AL
{
class dfavertex;
class dfaedge : public edge
{
public:

    dfaedge(char a ='0',dfavertex * b =NULL ,dfavertex * c =NULL,vectorr d=vectorr(1,0))
        :dweight(a),from(b),to(c),normal(d)
    {

    }
    vectorr getnormal();
    void setnormal(vectorr);
    vectorr surface();
    double getlength();
    void setlength (double);
    void setfrom (dfavertex *);
    dfavertex * getfrom ();
    void setto (dfavertex *);
    dfavertex * getto ();
    void setdweight(char='0');
    char getdweight();
    bool satisfy(vectorr);
    void draw(QPainter * painter);
private:
    char dweight;
    dfavertex * from;
    dfavertex * to;
    vectorr normal;
    double length;
};
}
#endif // DFAEDGE_H

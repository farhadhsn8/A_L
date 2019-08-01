#ifndef DFAM_H
#define DFAM_H
#include <string>
#include <vector>
#include "dfaedge.h"
#include "dfavertex.h"
#include <iostream>
#include <QPainter>
namespace AL
{
class dfam
{

public:
    dfam()
    {
        std::cout << "dfam created !"<<std::endl;
        dfaedge * d1 = new dfaedge();
        d1->setposition1(vectorr(125,311));
        d1->setposition2(vectorr(225,511));
    }
    void setinputs(std::string);
    std::string getinputs ();
    bool getresult();
    void setstart(dfavertex *);
    dfavertex * getstart ();
    void add_dedge ();
    void delete_dedge (dfaedge *);
    void add_dvertex ();
    void delete_dvertex (dfavertex *);
    void draw(QPainter *painter);
private:
    std::string inputs;
    bool result;
    dfavertex * start;
    std::vector <dfaedge * > dedges;
    std::vector <dfavertex *> dvertexes;
};
}
#endif // DFAM_H

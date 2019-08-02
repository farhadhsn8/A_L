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
        std::cout << "dfam  was created ##!"<<std::endl;
        dfaedge * d1 = new dfaedge();
        d1->setlength(150);
        d1->setnormal(vectorr(-1, 0));
        d1->setdweight('1');
        d1->setfrom(NULL);
        d1->setposition(vectorr(109,300));
        d1->setto(NULL);
        dedges.push_back(d1);
        dfavertex * v1 = new dfavertex();
        v1->setmood(0);
        v1->setname("q1");
        v1->setposition(vectorr(640,460));
        dvertexes.push_back(v1);
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
    object * getselectedobject (vectorr point);
    std::vector <dfaedge * > dedges;
    std::vector <dfavertex *> dvertexes;
private:
    std::string inputs;
    bool result;
    dfavertex * start;

};
}
#endif // DFAM_H

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

        d1->setdweight('1');
        d1->setfrom(NULL);

        d1->setto(NULL);
        dedges.push_back(d1);
        dfavertex * v1 = new dfavertex();
        v1->setmood(0);
        v1->setname("q1");
        v1->setposition(vectorr(0,0));
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
private:
    std::string inputs;
    bool result;
    dfavertex * start;
    std::vector <dfaedge * > dedges;
    std::vector <dfavertex *> dvertexes;
};
}
#endif // DFAM_H

#ifndef TURM_H
#define TURM_H
#include "machine.h"
#include "tedge.h"
#include "tvertex.h"
#include <string>
#include <vector>
#include <QPainter>
namespace AL
{
class turm : public machine
{
public:
    turm()
    {

    }
    void settinputs (std::string);
    std::string gettinputs();
    bool gettresult();
    void add_tedge ();
    void delete_tedge (tedge *);
    void add_tvertex ();
    void delete_tvertex (tvertex *);
    void settstart (tvertex *);
    tvertex * gettstart ();
    void meminit ();
    void draw(QPainter *painter);
private:
    std::string tinputs;
    bool tresult;
    char mem[150];//start from 30
    std::vector <tedge * > tedges;
    std::vector <tvertex * > tvertexes;
    tvertex * tstart;

};
}
#endif // TURM_H

#ifndef DFAEDGE_H
#define DFAEDGE_H
#include "edge.h"
namespace AL
{
class dfaedge : public edge
{
public:
    dfaedge();
    void setdweight(char='0');
    char getdweight();
    bool satisfy(Vectorr);
private:
    char dweight;

};
}
#endif // DFAEDGE_H

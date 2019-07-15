#ifndef TEDGE_H
#define TEDGE_H
#include "edge.h"
namespace AL
{
class tedge : public edge
{
public:
    tedge();
    bool satisfy(Vectorr);
    void setc1 (char);
    char getc1 ();
    void setc2 (char);
    char getc2 ();
    void setc3 (char);
    char getc3 ();
private:
    char c1;
    char c2;
    char c3;
};
}
#endif // TEDGE_H

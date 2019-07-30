#ifndef VERTEX_H
#define VERTEX_H
#include "object.h"
#include <string>
#include "vectorr.h"
#include <vector>


namespace AL
{
class vertex : public object
{
public:
    vertex(std::string s=" ",int a=0) : name(s),mood(a)
    {}

    virtual void draw();
    virtual void deleteobj();
    void setname(std :: string );
    std::string getname();
    void setmood(int);
    int getmood();
    bool satisfy(vectorr);
    private:
    std::string name;
    int mood;//0 is normal ,1 start ,2 final
};
}
#endif // VERTEX_H

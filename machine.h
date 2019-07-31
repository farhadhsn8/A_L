#ifndef MACHINE_H
#define MACHINE_H
#include <iostream>
#include <QPainter>
namespace AL
{


class machine
{
public:
    machine()
    {
        std::cout<<"machine was created !!@!!"<<std::endl;
    }
    void hello ();
    virtual void draw(QPainter * painter );
};
}
#endif // MACHINE_H

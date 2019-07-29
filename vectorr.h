#ifndef VECTOR_H
#define VECTOR_H
#include <cmath>
#include <string>
namespace AL
{

class vectorr
{
public:
     vectorr(double x = 0, double y = 0) : x(x), y(y) {}
     double getx();
     double gety();
     void setx(double);
     void sety(double);
     vectorr neg();
     vectorr operator-();
     double size();
     vectorr sub(vectorr);
     vectorr operator-(vectorr);
     bool isZero();
     std::string toString();
private:
  double x;
  double y;

};
} // namespace AL

#endif // VECTOR_H

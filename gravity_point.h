#include <Element.h>

#ifndef GRAVITY_POINT_H
#define GRAVITY_POINT_H


class Gravity_Point : public Element
{
private:
    double force;
public:
    Gravity_Point();
    void setForce( double force );
    double getForce();
};

#endif // GRAVITY_POINT_H

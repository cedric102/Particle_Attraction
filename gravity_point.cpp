#include "gravity_point.h"

Gravity_Point::Gravity_Point()
{

}

void Gravity_Point::setForce( double force )
{
    this->force = force;
}

double Gravity_Point::getForce()
{
    return this->force;
}

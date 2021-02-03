#include "Element.h"

Element::Element() { }

Element::~Element() { }

double Element::getX() {
    return xPos;
}
double Element::getY() {
    return yPos;
}

double Element::getXVel() {
    return this->xVel;
}
double Element::getYVel() {
    return this->yVel;
}

void Element::setXVel( double xVel ) {
    this->xVel = xVel;
}
void Element::setYVel( double yVel ) {
    this->yVel = yVel;
}

void Element::updatePosition( Element g , const double force ) {

}

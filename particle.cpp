#include <Particle.h>
#include <gravity_point.h>
#include <cmath>

Particle::Particle() {
    this->xPos = 0;
    this->yPos = 0;
}

Particle::~Particle() {
    this->xPos = 0;
    this->yPos = 0;
}

Particle::Particle( double x , double y ) {
    this->xPos = x;
    this->yPos = y;
}

void Particle::vectorGravity() {

}

void Particle::updatePosition( Element g , const double const_force  ) {
    double xDiff = g.getX() - this->getX();
    double yDiff = g.getY() - this->getY();
    double constForce = const_force;

    double distance = sqrt( xDiff * xDiff + yDiff * yDiff );
    double force = constForce / ( distance * distance );

    double angle = acos( xDiff / distance );
    if( yDiff < 0 )
        angle = -angle;

    this->xVel += cos( angle ) * force;
    this->yVel += sin( angle ) * force;

    this->xPos += this->xVel;
    this->yPos += this->yVel;

}


#include <Element.h>
#include <gravity_point.h>

#ifndef PARTICLE_H
#define PARTICLE_H

class Particle : public Element {

public :

    Particle();
    ~Particle();
    Particle( double x , double y );
    void updatePosition( Element g , const double force  );
    void vectorGravity();

};

#endif

#include "Implementation_1.h"
#include "gravity_point.h"
#include "Particle.h"
#include <iostream>

Implementation_1::Implementation_1()
{

}
void Implementation_1::Run() {
    Gravity_Point *g = new Gravity_Point();
    g->setForce( 0.2 );

    Element *p = new Particle( 3 , 2 );
    p->setXVel( 0.3 );
    p->setYVel( 0 );

    for( int i=0 ; i<1000 ; i++ ) {
        p->updatePosition( Particle( 0 , 0 ) , g->getForce() );
        printf( "%d ==> %f , %f , %f , %f\n" , i , p->getX() , p->getY() , p->getXVel() , p->getYVel() );
    }
    free(p);
}

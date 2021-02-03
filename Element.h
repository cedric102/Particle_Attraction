

#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
protected:
    double xPos , yPos;
    double xVel , yVel;

public:
    Element();
    virtual ~Element();

    double getX();
    double getY();
    double getXVel();
    double getYVel();

    void setXVel( double xVel );
    void setYVel( double yVel );

    void virtual updatePosition( Element g , const double force );

};

#endif // ELEMENT_H

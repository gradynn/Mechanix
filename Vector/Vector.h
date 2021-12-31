#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    float x;
    float y;

    float mag;
    float direc;

public:
    Vector();
    Vector(float, float);

    // Getter methods
    float getX();
    float getY();
    float getMag();
    float getDirection();

    // Setter methods
    void setX(float);
    void setY(float);
    void setVector(float, float);
};


#endif
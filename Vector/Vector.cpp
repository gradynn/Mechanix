#include "Vector.h"

#include <cmath>
#include <iostream>

// Default Vector
Vector::Vector()
{
    x = 0;
    y = 0;
    mag = 0;
    direc = 0;
}

Vector::Vector(float in_x, float in_y)
{
    x = in_x;
    y = in_y;
    mag = sqrt((x * x) + (y * y));
    direc = atan(y / x);
}

//Getter Methods
float Vector::getX()
{
    return x;
}

float Vector::getY()
{
    return y;
}

float Vector::getMag()
{
    return mag;
}

// Setter Methods
void Vector::setX(float in)
{
    x = in;
    mag = sqrt((x * x) + (y * y));
    direc = atan(y / x);
}

void Vector::setY(float in)
{
    y = y;
    mag = sqrt((x * x) + (y * y));
    direc = atan(y / x);
}

void Vector::setVector(float in_x, float in_y)
{
    x = in_x;
    y = in_y;

    mag = sqrt((x * x) + (y * y));
    direc = atan(y / x);
}

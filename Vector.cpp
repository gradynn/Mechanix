#include "Vector.h"

#include <cmath>
#include <iostream>

Vector::Vector()
{
    x_component = 0;
    y_component = 0;
    magnitude = 0;
}

Vector::Vector(double x, double y)
{
    x_component = x;
    y_component = y;
    magnitude = sqrt((x * x) + (y * y));
}


//Getter Methods
double Vector::getXComponent()
{
    return x_component;
}

double Vector::getYComponent()
{
    return y_component;
}

double Vector::getMagnitude()
{
    return magnitude;
}

// Setter Methods
void Vector::setXComponent(double x)
{
    x_component = x;
    magnitude = sqrt((x_component * x_component) + (y_component * y_component));
}

void Vector::setYComponent(double y)
{
    y_component = y;
    magnitude = sqrt((x_component * x_component) + (y_component * y_component));
}
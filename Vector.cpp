#include "Vector.h"

#include <cmath>
#include <iostream>

Vector::Vector()
{
    x_component = 0;
    y_component = 0;
    magnitude = 0;
    std::cout << "Vector Object Generated" << std::endl;
}

Vector::Vector(double x, double y)
{
    x_component = x;
    y_component = y;
    magnitude = sqrt((x * x) + (y * y));
    std::cout << "Vector Object Generated" << std::endl;
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


bool isValidVector()
{
    
}
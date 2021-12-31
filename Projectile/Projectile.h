#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "../Vector/Vector.h"

class Projectile
{
private:
    float mass;
    Vector init_velocity;

public:
    // Constructor
    Projectile(float, Vector);

    Vector positionAtT(float);    
};

#endif
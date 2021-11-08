#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    double x_component;
    double y_component;
    double magnitude;

public:
    Vector();
    Vector(double, double);

    // Getter methods
    double getXComponent();
    double getYComponent();
    double getMagnitude();

    // Setter methods
    void setXComponent(double);
    void setYComponent(double);


};


#endif
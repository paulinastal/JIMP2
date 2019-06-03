//
// Created by Paulina on 27/05/2019.
//

#ifndef KOLO_KULA_SPHERE_H
#define KOLO_KULA_SPHERE_H

#include"circle.h"

class Sphere : public Circle{
public:
    Sphere();
    Sphere(double _xCoord, double _yCoord, double _zCoord, double _radius);
    ~Sphere();
    double sphere_area() const;
private:
    double _zCoord;
};
#endif //KOLO_KULA_SPHERE_H

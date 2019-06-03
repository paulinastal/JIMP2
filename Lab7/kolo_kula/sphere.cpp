//
// Created by Paulina on 27/05/2019.
//
#include <math.h>
#include "sphere.h"

Sphere::Sphere(double _xCoord, double _yCoord, double _zCoord, double _radius) : Circle(_xCoord, _yCoord, _radius){
    this->_zCoord = _zCoord;
}

Sphere::~Sphere() {}

double Sphere::sphere_area() const {
    return 4 * M_PI * this->_radius * this->_radius;
}

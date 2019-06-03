//
// Created by Paulina on 27/05/2019.
//
#include <math.h>
#include "circle.h"

Circle::Circle(double _xCoord,double _yCoord,double _radius) {
    this ->_xCoord = _xCoord;
    this ->_yCoord = _yCoord;
    this ->_radius = _radius;
}

Circle::~Circle() {}

double Circle::circle_area() const {
    return M_PI * this ->_radius  * this->_radius;
}
//
// Created by Paulina on 16/05/2019.
//
#include <cmath>
#include <ostream>
#include "point.h"

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

Point::Point(double x, double y)
{
    xCoord = x;
    yCoord = y;
}
Point::~Point(){}

void Point::Default()
{
    xCoord = 0.0;
    yCoord = 0.0;
}

void Point::setPointX(double x)
{
    xCoord = x;
}

void Point::setPointY(double y)
{
    yCoord = y;
}

//Returns the X Coordinate.
double Point::GetX() const {
    return xCoord;
}
//Returns the Y Coordinate.
double Point::GetY() const
{
    return yCoord;
}


//Calculates distance from first point to next.
double Point::distanceTo(const Point &other) const
{
    double tempX, tempY;
    tempX = other.GetX();
    tempY = other.GetY();

    return sqrt(pow(GetX()-other.GetX(), 2) + pow(GetY()-other.GetY(), 2));
}

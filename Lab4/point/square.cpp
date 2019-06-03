//
// Created by Paulina on 16/05/2019.
//
#include <cmath>
#include <ostream>
#include "square.h"

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

Square::Square(double side) {

   _side = side;

}
Square::~Square() {}

double Square::Area() {
    return pow(_side,2);
}

double Square::Circumference() {
    return 4*_side;
}


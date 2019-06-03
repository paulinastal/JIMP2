#include <iostream>
#include "circle.h"
#include "sphere.h"

int main() {

    auto circle = new Circle(0, 0, 1);
    std::cout << circle->circle_area() << std::endl;

    auto sphere = new Sphere(0, 0, 0, 1);
    std::cout << sphere->sphere_area() << std::endl;

    return 0;
}
#include <memory>
#include <vector>
#include <iostream>
#include <sstream>
#include "point.h"
#include "square.h"

int main() {
    Point p1 (9,4);
    const Point *ptr_p = new Point(3,4);
    std::cout << "The distance between two points: "<<  ptr_p->distanceTo(p1) << std::endl;
    Square square1{ptr_p->distanceTo(p1)};
    std::cout << "Your area: " << square1.Area() << std::endl;
    std::cout << "Your circumference: " << square1.Circumference() << std::endl;
    return 0;
}
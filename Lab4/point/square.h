//
// Created by Paulina on 16/05/2019.
//

#ifndef POINT_TEST_SQUARE_H
#define POINT_TEST_SQUARE_H

class Square{
public:
    Square();
    Square(double);
    ~Square();
    double Circumference();
    double Area();
private:
    double _side;
};
#endif //POINT_TEST_SQUARE_H

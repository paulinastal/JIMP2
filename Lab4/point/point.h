//
// Created by Paulina on 16/05/2019.
//

#ifndef POINT_TEST_POINT_H

class Point
{
private:
    double xCoord;
    double yCoord;
public:
    Point();
    Point(double, double);
    ~Point();
    double GetX() const;
    double GetY() const;
    void setPointX(double);
    void setPointY(double);
    void Default();
    double distanceTo(const Point &) const;

};


#define POINT_TEST_POINT_H

#endif //POINT_TEST_POINT_H

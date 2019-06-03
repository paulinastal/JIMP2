//
// Created by Paulina on 27/05/2019.
//

#ifndef KOLO_KULA_CIRCLE_H
#define KOLO_KULA_CIRCLE_H

class Circle{
public:
    Circle();
    Circle(double _xCoord,double _yCoord,double _radius);
    ~Circle();
    virtual double circle_area() const;
protected:
    double _xCoord;
    double _yCoord;
    double _radius;
};
#endif //KOLO_KULA_CIRCLE_H

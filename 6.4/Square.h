/*
CH08-320142
Square.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
public:
    Square(const char *n, double s);
    ~Square();
    double calcArea() const;
    double calcPerimeter() const;

private:
    double side;
};

//alternative:
//computation of area and perimeter can be done
//from parent class itself 'rectangle' as well
#endif

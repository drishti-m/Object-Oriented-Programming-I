/*
CH08-320142
Rectangle.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const char *n, double a, double b) : Area(n)
{
    length = a;
    width = b;
    cout << "Rectangle constructor being called...";
}

Rectangle::~Rectangle()
{
}

double Rectangle::calcArea() const
{
    std::cout << "calcArea of Rectangle...\n";
    return length*width;

}//computes area

double Rectangle::calcPerimeter() const
{
    std::cout << "calcPerimeter of Rectangle...\n";
    return (2*(length + width));

} //computes perimeter

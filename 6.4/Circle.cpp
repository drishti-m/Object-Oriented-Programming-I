/*
CH08-320142
Circle.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

Circle::Circle(const char *n, double a) : Area(n)
{
    radius = a;
    cout << "Circle constructor being called...";
}

Circle::~Circle()
{
}

double Circle::calcArea() const
{
    std::cout << "calcArea of Circle...\n";

    return radius * radius * M_PI;
}//area computation

double Circle::calcPerimeter() const
{
    std::cout << "calcPerimeter of Circle...\n";
    return (2 * M_PI * radius);
}//perimeter computation

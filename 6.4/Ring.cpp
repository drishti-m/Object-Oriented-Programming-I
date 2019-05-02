/*
CH08-320142
Ring.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

using namespace std;

#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner)
    : Circle(n, outer)
{
    innerradius = inner;
    cout << "Ring Constructor being called...";
}

Ring::~Ring()
{
}

double Ring::calcArea() const
{
    std::cout << "calcArea of Ring...\n";
    double inner_a = innerradius * innerradius * M_PI;

    return (Circle::calcArea()-inner_a);

}//computing area

double Ring::calcPerimeter() const
{
    std::cout << "calcPerimeter of Ring...\n";
    double inner_p = (2 * M_PI * innerradius);

    return (Circle::calcPerimeter() + inner_p);

}//computing perimeter

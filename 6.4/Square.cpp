/*
CH08-320142
Square.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
using namespace std;
#include <iostream>
#include "Square.h"

Square::Square(const char *n, double s) : Rectangle(n,side,side)
{
    side = s;
    cout << "Square constructor being called..." << endl;

}//constructor

Square::~Square()
{
}//destructor

double Square::calcArea() const
{
    std::cout << "calcArea of Square...\n";

    return side*side;

}//computes area

double Square::calcPerimeter() const
{
    std::cout << "calcPerimeter of Rectangle...\n";

    return (4*side);

}//computes perimeter

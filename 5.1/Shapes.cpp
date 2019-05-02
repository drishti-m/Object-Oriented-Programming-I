
/*
CH08-320142
Shapes.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;


//-- Start of Class SHAPE
Shape::Shape(const string& n) : name(n)
{
cout << "Parametric constructor Shape" << endl;
cout << "" << endl;
}//copy constructor


string Shape::getName() const
{
    return name;
}//getter for Name, Shape


void Shape::printName() const
{
    cout << name << endl;
}//prints shape's name

//-- end of class Shape




//-- Start of class CENTEREDSHAPE
CenteredShape::CenteredShape(const string& n, double nx, double ny):
    Shape(n)
{
    x = nx;
    y = ny;
}//parametric constructor CenteredShape


double CenteredShape::getx() const
{
    return x;
}//getter


double CenteredShape::gety() const
{
    return y;
}//getter

//-- end of class CenteredShape




//--Start of class REGULARPOLYGON

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}//Parametric constructor Regular Polygon


int RegularPolygon::getE() const
{
    return EdgesNumber;
}//getter

//--End of class RegularPolygon




//--Start of Class CIRCLE

Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}//Parametric constructor Circle

//--end of class Circle




//--Start of Class HEXAGON

Hexagon::Hexagon():
    RegularPolygon("Hexagon,", 0, 0, 6)
{
cout << "Empty constructor Hexagon " << endl;
}//Empty Constructor Hexagon


Hexagon::Hexagon(const Hexagon& sec):
    RegularPolygon(sec.getName(), sec.getx(), sec.gety(), sec.getE())
{
    cout << "Copy constructor Hexagon" << endl;
    cout << "" << endl;
    side = sec.side;
    color = sec.color;
}//Copy constructor Hexagon


Hexagon::Hexagon(const string& n, double nx, double ny, int nl, int t, const string& c):
    RegularPolygon(n,nx,ny,nl)
{
    cout << "Parametric constructor called." << endl;
    side = t;
    color = c;
}//Parametric constructor Hexagon


Hexagon::~Hexagon(){
cout << "Destructor Hexagon. " << endl;
} //Destructor Hexagon


void  Hexagon::setSide(int t)
{
    side = t;
}//setter


void Hexagon::setColor(string c)
{
    color = c;
}//setter


int Hexagon::getSide()
{
    return side;
}//getter


string Hexagon::getColor()
{
    return color;
}//getter


double Hexagon:: Perimeter()
{
    double perimeter = 6 * side;

    return perimeter;
}//Calculation of Perimeter of Hexagon


double Hexagon:: Area()
{
    double r = pow(3, 0.5);
    double area = 3 * r * side *side /2;

    return area;
}//Calculating Area of hexagon

//--End of Class Hexagon



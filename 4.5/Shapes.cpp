/*
CH08-320142
Shapes.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#define PI 3.14

using namespace std;

//Base Class: SHAPE

Shape::Shape()
{
    name = "Unknown";
}//default constructor


Shape::Shape(const string& n) : name(n)
{
}//parametric constructor


Shape::Shape(const Shape& second)
{
    name = second.name;
    cout << "Copy constructor called" << endl;

}//copy constructor


void Shape:: setName(std:: string sname)
{
    name = sname;
}//setting name


std:: string Shape:: getName() const
{
    return name;
}//getting name


void Shape::printName() const
{
    cout << name << endl;
}//printing name
// --- end of class Shape




//class CENTERED SHAPE


CenteredShape:: CenteredShape(): Shape("Centered Shape")
{
    x = 1.0;
    y = 1.0;
}//default constructor


CenteredShape::CenteredShape(const string& n, double nx, double ny):
    Shape(n)
{
    x = nx;
    y = ny;
}//parametric constructor


CenteredShape::CenteredShape(const CenteredShape& second):
    Shape(second)
{
    x = second.x;
    y = second.y;
} //copy constructor
//second refers to a second object (object in an object)



void CenteredShape:: setxy(double nx, double ny)
{
    x = nx;
    y = ny;

}//setter for x,y


double CenteredShape:: getx() const
{
    return x;
}

double CenteredShape:: gety() const
{
    return y;
}

//-- end of class centered shape




//Class REGULAR POLYGON


RegularPolygon::RegularPolygon():
    CenteredShape("Regular Polygon", 0.0, 0.0)
{
    EdgesNumber = 1;
}//default constructor


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}//parametric constructor


RegularPolygon:: RegularPolygon(const RegularPolygon& second):
    CenteredShape(second.getName(), second.getx(), second.gety())
{

    EdgesNumber = second.EdgesNumber;
}//copy constructor
//can't use second.name in parameters
//of CenteredShape due to private class

void RegularPolygon:: setEdgesNo(int nl)
{
    EdgesNumber = nl;
}


int RegularPolygon:: getEdgesNo()
{
    return EdgesNumber;
}

//---- end of Class Regular Polygon




//class CIRCLE


Circle::Circle():
    CenteredShape("Circle", 0.0, 0.0)
{
    Radius = 1;
}//default constructor


Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}//parametric constructor


Circle::Circle(const Circle& second):
    CenteredShape(second.getName(), second.getx(), second.gety())
{
    Radius = second.getRadius();

}//Copy constructor


void Circle:: setRadius(double r)
{
    Radius = r;
}//setting Radius


double Circle:: getRadius() const
{
    return Radius;
}//getting Radius
//const is important in such contexts

double Circle:: Perimeter()
{
    double perimeter = 2 * PI * Radius;
    return perimeter;

}//calculating perimeter

double Circle:: Area()
{
    double area = PI * Radius * Radius;
    return area;
}//calculating area

//--- end of class Circle




//Class RECTANGLE


Rectangle::Rectangle():
    RegularPolygon("Rectangle", 0.0, 0.0, 4)
{
    width = 1.0;
    height = 1.0;
} //empty constructor


Rectangle::Rectangle(const std::string& n, double nx, double ny, double nw, double nh):
    RegularPolygon(n, nx, ny, 4)
{
    width = nw;
    height = nh;

}//parametric constructor


Rectangle::Rectangle(const Rectangle& second):
    RegularPolygon(second.getName(), second.getx(), second.gety(), 4)
{
    width = second.getWidth();

    height = second.getHeight();
}//Copy constructor

void Rectangle:: setWidth(double nw)
{
    width = nw;
}

void Rectangle:: setHeight(double nh)
{
    height = nh;
}

double Rectangle:: getWidth() const
{
    return width;
}

double Rectangle:: getHeight() const
{
    return height;
}

double Rectangle:: Perimeter() const
{
    double perimeter = 2.0 * (width + height) ;
    return perimeter;
}

double Rectangle:: Area() const
{
    double area = width * height;
    return area;
}

//--- end of Class Rectangle




//Class SQUARE


Square:: Square() :
    Rectangle("Square", 0.0, 0.0, 1.0, 1.0)
{
    side = 1.0;
}//default constructor


Square:: Square(const std:: string& n, double nx, double ny, double nside):
    Rectangle(n, nx, ny, nside, nside)
{
    side = nside;
}//parametric constructor


Square:: Square(const Square& second) : Rectangle(second)
{

    side = second.getSide();
}//Copy constructor


//calling Rectangle(second) directly in line 268
//because no extra data member required in Rectangle vs Square
//alternative:
//Square:: Square(const Square& second) :
//Rectangle(second.getName(), second.getx(), second.gety(), second.getSide(), second.getSide())


void Square:: setSide(double nside)
{
    side = nside;
}

double Square:: getSide() const
{
    return side;
}

double Square:: Perimeter()
{
    double perimeter = 4 * side;
    return perimeter;
}

double Square:: Area()
{
    double area = side * side;
    return area;
}

//--- end of class Square




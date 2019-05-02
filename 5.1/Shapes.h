/*
CH08-320142
Shapes.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape  			// base class
{
private:   				// private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();					// empty shape
    Shape(const Shape&);		// copy constructor

    string getName() const;
    void printName() const ;  	// prints the name
};

class CenteredShape : public Shape    // inherits from Shape
{
private:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);

    double getx() const;
    double gety() const;
    void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape   // a regular polygon is a centered_shape with a number of edges
{
private:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);

    int getE() const;
};

class Circle : public CenteredShape    // a Circle is a shape with a center and a radius
{
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
};

class Hexagon: public RegularPolygon    //a Hexagon is a regular polygon with a color and 6 sides
{
private:
    int side;
    string color;      //data properties

public:
    Hexagon(); //regular constructors of Hexagon
    Hexagon(const Hexagon&);
    Hexagon(const std::string&, double, double, int, int, const string&);
    ~Hexagon(); //destructor

    void setSide(int); //setters
    void setColor(string);
    int getSide(); //getters
    string getColor();

    double Perimeter(); //computes Perimeter
    double Area(); //computes Area

};

#endif

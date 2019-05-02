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

class Shape  			// base class
{
private: // private access modifier: could also be protected

    std::string name;   // every shape will have a name

public:

    Shape(const std::string&);  // builds a shape with a name
    Shape();					// empty shape
    Shape(const Shape&);		// copy constructor

    void printName() const ;  // prints the name

    void setName(std:: string); //setter for name
    std::string getName() const; //getter for name
};




class CenteredShape : public Shape    // inherits from Shape
{
private:

    double x,y;  // the center of the shape

public:

    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);

    void move(double, double);	// moves the shape, i.e. it modifies it center

    void setxy(double, double); //sets center

    double getx() const;
    double gety() const;


};




class RegularPolygon : public CenteredShape   // a regular polygon is a centered_shape with a number of edges
{
private:

    int EdgesNumber; //no of edges

public:

    RegularPolygon(const std::string&, double, double, int); //usual three constructors
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);

    void setEdgesNo(int); //setting no of edges
    int getEdgesNo(); //getting no of edges

};



class Circle : public CenteredShape    // a Circle is a shape with a center and a radius
{
private:

    double Radius;

public:
    Circle(const std::string&, double, double, double); //usual three constructors
    Circle();
    Circle(const Circle&);

    void setRadius(double); //sets radius
    double getRadius() const;
    //radius is parameter in one of the parametric constructors
    //safe to use 'const' in parameters of para constructors
    //Likewise, 'const' in getter so that can't modify the content

    double Perimeter(); //Perimeter of Circle
    double Area(); //Area of Circle


};




class Rectangle: public RegularPolygon  //a Rectangle is a Reg Polygon with width and height
{
private:

    double width;
    double height;

public:

    Rectangle();
    Rectangle(const std:: string&, double,double, double, double);
    Rectangle(const Rectangle&);

    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;

    double Perimeter() const;
    double Area() const;

};

class Square: public Rectangle  //a Square is a rectangle with equal width and height
{
private:

    double side;

public:

    Square();
    Square(const std:: string&, double, double, double);
    Square(const Square&);

    void setSide(double);
    double getSide() const;

    double Perimeter();
    double Area();


    //alternative:
    //don't need to include Perimeter and Area here, if:
    //we can derive it from its parent class 'rectangle'
    //for that, create mapping in Shapes.cpp

};

#endif

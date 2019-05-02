/*
CH08-320142
testHexagon.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv)
{
    //Creation of 1st hexagon
    Hexagon h1;

    //setters of hexagon's properties
    h1.setColor("red");
    h1.setSide(2);


    //2nd hexagon
    Hexagon h2;
    //setters of 2nd hexagon properties
    h2.setColor("yellow");
    h2.setSide(10);

    //3rd hexagon--copy of 2nd object
    Hexagon h3(h2);


    //print properties of First Hexagon
    cout << "First hexagon: " << endl;
    cout << "Color = " << h1.getColor() << endl;
    cout << "Perimeter = " << h1.Perimeter() << endl;
    cout << "Area = " << h1.Area() << endl;
    cout << "" << endl;

    //print properties of 2nd Hex
    cout << "Second hexagon: " << endl;
    cout << "Color = " << h2.getColor() << endl;
    cout << "Perimeter = " << h2.Perimeter() << endl;
    cout << "Area = " << h3.Area() << endl;
    cout << "" << endl;


    //prints properties of 3rd hex
    cout << "Third hexagon: " << endl;
    cout << "Color = " << h3.getColor() << endl;
    cout << "Perimeter = " << h3.Perimeter() << endl;
    cout << "Area = " << h3.Area() << endl;
    cout << "" << endl;


    return 0;
}

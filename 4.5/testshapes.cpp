/*
CH08-320142
testshapes.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);

    r.printName();
    c.printName();
    cout << "" << endl;

    cout << "Testing required instances: " << endl;
    cout << "" << endl;

    //creating instance for Circle
    Circle ci ("My circle", 2, 9, 1);
    ci.printName(); //printing name

    //print perimeter and area
    cout << "Perimeter = " << ci.Perimeter() << endl;
    cout << "Area = " << ci.Area() << endl;
    cout << "" << endl;


    //instance of rectangle
    Rectangle re("Rectangle", -4, 2, 5.5, 8.1);
    re.printName();

    //print perimeter and area
    cout << "Perimeter = " << re.Perimeter() << endl;
    cout << "Area = " << re.Area() << endl;
    cout << "" << endl;

    //instance of Square
    Square sq("Square", -1, 3, 7.8);
    sq.printName();

    //print Perimeter and area
    cout << "Perimeter = " << sq.Perimeter() << endl;
    cout << "Area = " << sq.Area() << endl;


   //just to check implementation of circle copy constructor:

   //circle c3(ci);
   //cout << c3.Perimeter() << endl;


    return 0;
}

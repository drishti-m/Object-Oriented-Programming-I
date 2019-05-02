/*
CH08-320142
testvirtual.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
/*
 Class structure of this program


               Area Class(abstract class)
                    //             \\
                   //               \\
               Rectangle           Circle
               //                     \\
           Square                     Ring


*/
const int num_obj = 9;
//makes sure num_obj isn't changed

int main()
{
    Area *lista[num_obj];						// (1)
    /*(1): a list storing abstract class type
    through pointers.
    This is used for polymorphism
    */

    int index = 0;								// (2)
    /* (2): index used as positions in array list
    and used for while loop in (7) & (8)
    */

    double sum_area = 0.0;						// (3)
    double sum_per = 0.0;
    //(3): initializing value as 0 during start


    //Creating objects:

    cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5, 2);				// (4)
    //allocating blue_ring as object of ring on stack

    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    //allocating a circle on stack

    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN",5,6);
    //allocating a rectangle on stack

    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    //allocating a circle on stack

    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    //allocating a rectangle on stack

    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    //allocating a ring on stack

    cout << "Creating Square: ";
    Square yellow_square("YELLOW", 15);
    //allocating a square on stack

    cout << "Creating Square: ";
    Square blue_square("BLUE", 4);
    //allocating a Square on stack


    /*(5): Gets the address/pointer of all objects of Area
    on stack and, stores them in list[index]
    */
    lista[0] = &blue_ring;						// (5)
    lista[1] = &yellow_circle;
    lista[2] = &green_rectangle;
    lista[3] = &red_circle;
    lista[4] = &black_rectangle;
    lista[5] = &violet_ring;
    lista[6] = &yellow_square;
    lista[7] = &blue_square;
    // alternative way
    /* lista[8] = new Square("check", 5);

    cout << lista[8]->calcArea() << "check AREA SQUARE" << endl;
    //how to deallocate?
    */






    //(7): making sure the index doesn't exceed the bound
    //bound = num_obj which is constant
    while (index < num_obj)   					// (7)
    {
        (lista[index])->getColor();
        //gets value of color from the object in the given index

        double peri = lista[index]->calcPerimeter();
        sum_per += peri;
        //computing total perimeter

        double area = lista[index++]->calcArea();// (8)
        //(8): index increases by 1, and
        //area of the object in the given index is computed
        //and assigned to local variable 'area'

        sum_area += area;
        //(8): total area of all objects being calculated

    }

    cout << "" << endl;
    cout << "\nThe total area is "
         << sum_area << " units " << endl;	// (9)
    //(9): prints total area of all objects



    cout << "\nThe total perimeter is "
         << sum_per << " units " << endl;
    //prints total perimeter of all objects

    return 0;
}

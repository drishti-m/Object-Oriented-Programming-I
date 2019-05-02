/*
CH08-320142
testvirtual.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 20;
//makes sure num_obj isn't changed


int main()
{
    Area *list[num_obj];

    /* a list storing abstract class type
    through pointers.
    This is used for polymorphism
    */

    int i, o_id, c_ind;
    int size1,size2;
    double sum_area = 0.0;
    double sum_per = 0.0;
    //initializing value as 0 during start

    const char* color[4] = {"RED", "GREEN", "BLUE", "YELLOW"};
    //const char* because of
    //Area::Area(const char* n)

    Area *ptr;
    //pointer for objects

    srand(static_cast<unsigned int> (time(0)));
    //setting start time of algorithm as 0

    for (i = 0; i < num_obj; i++)
    {
        o_id = rand() % 4;
        size1 = rand() % 50 + 1;
        size2 = rand() % 50 + 1;
        c_ind = rand() % 4;
        //randomly generating numbers to use


        cout << "" << endl;
        cout << "Object no: " << (i+1) << endl;

        //creating objects according to o_id:

        if (o_id == 0)
        {
            cout << "" << endl;
            cout << "Creating circle..\n";
            ptr = new Circle(color[c_ind], size1);
            //dynamically allocating obj,

        }//ptr in this loop will present to a Circle

        else if (o_id == 1)
        {
            cout << "" << endl;
            cout << "Creating ring..\n";
            ptr = new Ring(color[c_ind], size1, size2);
        } //ptr points to a ring

        else if (o_id == 2)
        {
            cout << "" << endl;
            cout << "Creating rectangle..\n";
            ptr = new Rectangle (color[c_ind], size1, size2);

        } //ptr points to a rectangle

        else
        {
            cout << "" << endl;
            cout << "Creating square..\n";
            ptr = new Square(color[c_ind], size2);

        }//ptr points to a square

        cout << "" << endl;
        list[i] = ptr;
        //stores the pointer of objects in stack
    }//creating 20 objects randomly


    cout << "" << endl;
    cout << "20 objects created.\n" << endl;
    cout << "" << endl;



    cout << "Demonstrating computations: \n" << endl;

    for (i = 0; i < 20; i++)
    {
        (list[i])->getColor();
        //gets value of color from the object in the given index

        double peri = list[i]->calcPerimeter();
        sum_per += peri;
        //computing total perimeter

        double area = list[i]->calcArea();// (8)
        sum_area += area;
        //computing total area


    } //computing total area and perimeter of all objects



    cout << "\nThe total area is "
         << sum_area << " units " << endl;	// (9)
    //prints total area of all objects

    cout << "\nThe total perimeter is "
         << sum_per << " units " << endl;
    //prints total perimeter of all objects




    for(i = 0; i < num_obj; i++)
    {
        delete list[i];
    }//deallocation


    return 0;
}

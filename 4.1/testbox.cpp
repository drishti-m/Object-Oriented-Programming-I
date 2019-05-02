/*
CH08-320142
testbox.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main(int argc, char** argv)
{
    int no, i;
    double height, width, depth, TotalVol = 0;
    Box *b; //ptr to dynamically allocate

    cout << "Enter the number of boxes you want " << endl;
    cin >> no;

    b = new Box[no]; //dynamically allocating memory for 'no' number of objects in Box

    //loop for 'no' number of boxes
    for (i = 0; i < no; i++)
    {
        cout << "Enter height for box " << (i+1) << endl;
        cin >> height;

        cout << "Enter width for box " << (i+1) << endl;
        cin >> width;

        cout << "Enter depth for box " << (i+1) << endl;
        cin >> depth;

/* b->setDepth(5);
cout << "print check" << endl;
b->print(); */ //what does this do?

        //setters of properties:
        b[i].setHeight(height);
        b[i].setWidth(width);
        b[i].setDepth(depth);

        //alternative way Vol[i] = b[i].Volume();
        //by dynamically allocating Vol and
        //doing TotalVol += Vol[i];

        //calls print method
        b[i].print();

        //calls method Volume for the current object
        //and adds it to TotalVol
        TotalVol += b[i].Volume();

        cout << "" << endl;
    }

    //Total volume printing
    cout << "The total volume of all boxes = "<< TotalVol << endl;


    delete []b;
    //deallocating memory for objects

    return 0;
}


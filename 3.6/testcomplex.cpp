
/*
CH08-320142
testcomplex.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include<fstream>
#include <cstdlib>

/* assuming input files have real number and complex number followed by space */
int main()
{
    //creating 3 instances
    Complex c1,c2,c3;

    ifstream in1("in1.txt");
    ifstream in2("in2.txt");
    ofstream out("output.txt");

    //error in opening input file 1
    if (!in1.good())
    {
        cerr << "Error opening input file 1 " << endl;
        exit(1);
    }

    //error in opening input file 2
    if (!in2.good())
    {
        cerr << "Error opening input file 2 " << endl;
        exit(2);
    }


    //error in opening output file
    if (!out.good())
    {
        cerr << "Error opening output file" << endl;
        exit(3);
    }

    //inputting values from files to objects
    in1>>c1;
    in2>>c2;


    //print complex numbers
    cout << "First complex number is:" << endl;
    cout << c1;
    cout << "Second complex number is:" << endl;
    cout << c2;

    //adding 2 complex numbers
    c3 = c1 + c2;
    cout << "" << endl;
    cout << "After adding 2 complex no:" << endl;
    cout << c3;
    out << "Writing addition value in file.." << endl;
    out << c3;

    //subtracting 2 complex numbers
    c3 = c2 - c1;
    cout << "" << endl;
    cout << "After subtracting 2 complex no:" << endl;
    cout << c3;
    out << "Writing subtraction value in file.." << endl;
    out << c3;

    //multiplying 2 complex numbers
    c3 = c1 * c2;
    cout << "" << endl;
    cout << "After multiplying 2 complex no:" << endl;
    cout << c3;
    out << "Writing multiplication value in file.." << endl;
    out << c3;

    //closing files
    in1.close();
    in2.close();
    out.close();

    return 0;



}

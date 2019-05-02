/*
CH08-320142
testcritter.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    string name;


    Critter c1; //first instance (constructor without parameter)
    c1.setHunger(5); //setting hunger level 5 for critter 1
    c1.print(); //printing data for critter1


    name = "Bluewool"; //Assigning a name for critter 2
    Critter c2(name); //second instance// constructor with 1 parameter
    c2.setHunger(5);//set hunger level for critter 2
    c2.print(); //printing data of critter 2


    name = "Ubiquitous";//Assigning a name for critter 3
    Critter c3(name, 5, 8, 10); //3rd instance//constructor w 4 parameters
    cout << "Parameters passed are: name, hunger, boredom and height." << endl;
    c3.print();


    name = "Queer"; //Assigning name for critter 4
    Critter c4(name, 5, 11);//4th instance//constructor w 3 parameters
    cout << "Parameters passed are: name, hunger and boredom." << endl;
    //Here, height will be default value
    c4.print();

    //two additional lines:
    Critter c5(name, 4, 10, 8, 9.5);
    c5.print();

    return 0;
}


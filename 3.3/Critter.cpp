/*
CH08-320142
Critter.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//for constructor without any parameter
Critter::Critter()
{
    name = "critter";
    height = 10;
    hunger = 0.0;
    boredom = 0;
    cout << "Constructor Critter without any parameter is called." << endl;
}

//for constructor with one parameter (name)
Critter::Critter(string& cname)
{
    name = cname;
    height = 10;
    hunger = 0.0;
    boredom = 0;
    cout << "Constructor Critter with one parameter is called." << endl;
}

//for constructor with multiple parameters
Critter:: Critter(string& cname, int chunger, int cboredom, double cheight)
{
    name = cname;
    height = cheight;
    hunger = int2doub(chunger); //for implicit conversion of chunger into double
    boredom = cboredom;

    cout << "Constructor Critter with 3 or 4 parameters is called." << endl;
}

//for SETTERS
void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = int2doub(newhunger);
    //implicit conversion while setting value for hunger
}

void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}


//for GETTERS
string Critter::getName()
{
    return name;
}

double Critter:: getHeight()
{
    return height;
}


int Critter::getHunger()
{
    return doub2int(hunger);
    //returns value after converting back to integer
}

int Critter::getBoredom()
{
    return boredom;
}

//for printing out data on screen
void Critter::print()
{

    cout << "Class data: " << endl;
    cout << "Critter Name: " << name << endl;
    cout << "Hunger: " << getHunger() << endl; //alternative: cout << hunger << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "" << endl;

}

//method for converting integer to double as specified
double Critter:: int2doub(int x)
{
    return (x /10.0);
}

//method for converting double to integer as specified
int Critter:: doub2int(double x)
{
    return (x * 10);
}


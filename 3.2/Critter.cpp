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
    hunger = 0;
    boredom = 0;
    cout << "Constructor Critter without any parameter is called." << endl;
}

//for constructor with one parameter (name)
Critter::Critter(string& cname)
{
    name = cname;
    height = 10;
    hunger = 0;
    boredom = 0;
    cout << "Constructor Critter with one parameter is called." << endl;
}

//for constructor with multiple parameters
Critter:: Critter(string& cname, int chunger, int cboredom, double cheight)
{
    name = cname;
    height = cheight;
    hunger = chunger;
    boredom = cboredom;

    cout << "Constructor Critter with 3 or 4 parameters is called." << endl;
}

//for setters
void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}
void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}

//for getters
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
    return hunger;
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
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "" << endl;

}

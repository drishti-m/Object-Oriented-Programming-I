/*
CH08-320142
City.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//Definition of Class City as follows:
void City::setName(string& newname)
{
    name = newname;
}

void City::setNoOfCitizens(int newno_of_citizens)
{
    no_of_citizens = newno_of_citizens;
}

void City::setLocation(string& newlocation)
{
    location = newlocation;
}

void City::setPoi(string& newpoi)
{
    poi = newpoi;
}

string City::getName()
{
    return name;
}

int City::getNoOfCitizens()
{
    return no_of_citizens;
}

string City::getLocation()
{
    return location;
}

string City::getPoi()
{
    return poi;
}

void City::print()
{
    cout << "City Name: " << name << endl;
    cout << "Location: " << location << endl;
    cout << "No of citizens: " << no_of_citizens << endl;
    cout << "Point of interest: " << poi << endl;
}



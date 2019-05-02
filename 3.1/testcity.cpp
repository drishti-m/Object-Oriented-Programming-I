/*
CH08-320142
testcity.cpp (problem 3.1)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    City c1, c2, c3; //creating three instances for three cities

    string name;
    //note: variable doesn't necessarily have to be 'name',
    //this is just local variable, can be anything

    int no_of_citizens;
    string location;
    string poi;


    //initializing data for the city "Bremen"
    name = "Bremen";
    location = "Germany";
    poi = "Bremerhaven";
    no_of_citizens = 10000;

    //setters for Bremen
    c1.setName(name);
    c1.setNoOfCitizens(no_of_citizens);
    c1.setLocation(location);
    c1.setPoi(poi);

    //using getters to print data for Bremen
    cout << "City Name: " << c1.getName() << endl;
    cout << "Location: " << c1.getLocation() << endl;
    cout << "No of citizens: " << c1.getNoOfCitizens() << endl;
    cout << "Point of interest: " << c1.getPoi() << endl;
    cout << " " << endl;


    //initializing data for Berlin
    name = "Berlin";
    location = "Germany";
    poi = "Berlin Wall";
    no_of_citizens = 15500;


    //setters for Berlin
    c2.setName(name);
    // note: we shouldn't pass "berlin" as a parameter here
    //because compiler takes it as an array of chars, when we have defined string
    c2.setNoOfCitizens(no_of_citizens);
    c2.setLocation(location);
    c2.setPoi(poi);


    //getter to print data for Berlin
    cout << "City Name: " << c2.getName() << endl;
    cout << "Location: " << c2.getLocation() << endl;
    cout << "No of citizens: " << c2.getNoOfCitizens() << endl;
    cout << "Point of interest: " << c2.getPoi()<< endl;
    cout << "" << endl;


    //data for Hamburg
    name = "Hamburg";
    c3.setName(name);

    cout << "Please enter the data for " << c3.getName() << ":" << endl;
    cout << "" << endl;

    //take data for Hamburg as input from user
    cout << "Location:" << endl;
    getline(cin, location);

    cout << "Number of citizens: "<< endl;
    cin >> no_of_citizens;

    cout << "Point of interest: " << endl;
    cin.get(); //to remove former white spaces
    cin >> poi;

    //setters for Hamburg

    c3.setLocation(location);
    c3.setNoOfCitizens(no_of_citizens);
    c3.setPoi(poi);

    cout << "" << endl;

    //print data for Hamburg (i.e instance c3)
    c3.print();

    return 0;
}

/*
CH08-320142
TournamentMember.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string.h>

using namespace std;

string TournamentMember::location = "Germany";
//initializing static variable

TournamentMember::TournamentMember()
{
    cout << "Empty Constructor called." << endl;
    cout << "" << endl;

    //used strcpy instead of assignment so that
    //pointers don't mess up
    strcpy(fname, "Default");
    strcpy(lname, "Member");
    strcpy(dob, "1999-01-01");

    weight = 60;
    height = 5;

}//empty constructor

TournamentMember::TournamentMember(char * f, char* l, char* d, double w, double h)
{
    cout << "Parametric constructor called." << endl;
    cout << "" << endl;

    strcpy(fname,f);
    strcpy(lname,l);
    strcpy(dob,d);

    weight = w;
    height = h;
}//parametric constructor

TournamentMember::TournamentMember(const TournamentMember& sec)
{
    cout << "Copy Constructor called." << endl;
    cout << "" << endl;

    strcpy(fname,sec.fname);
    strcpy(lname,sec.lname);
    strcpy(dob,sec.dob);

    weight = sec.weight;
    height = sec.height;

}//copy constructor

TournamentMember::~TournamentMember()
{
    cout << "Destructor called." << endl;
    cout << "" << endl;
}//destructor

void TournamentMember:: Loc_Change(const string& d)
{
    location = d;

}//updating location

void TournamentMember:: print()
{
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Weight = " << weight << endl;
    cout << "Height = " << height << endl;
    cout << "Location = " << location << endl;
    cout << "" << endl;

} //printing


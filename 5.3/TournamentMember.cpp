/*
CH08-320142
TournamentMember.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string TournamentMember::location = "Germany";
//initializing static variable

TournamentMember::TournamentMember()
{
    cout << "Empty Constructor TournamentMember called." << endl;
    cout << "" << endl;

    //used strcpy instead of assignment so that
    //pointers don't mess up
    strcpy(fname, "John");
    strcpy(lname, "Crue");
    strcpy(dob, "1999-01-01");

    weight = 60;
    height = 5;

}//empty constructor

TournamentMember::TournamentMember(char * f, char* l, char* d, double w, double h)
{
    cout << "Parametric constructor TournamentMember called." << endl;
    cout << "" << endl;

    strcpy(fname,f);
    strcpy(lname,l);
    strcpy(dob,d);

    weight = w;
    height = h;
}//parametric constructor

TournamentMember::TournamentMember(const TournamentMember& sec)
{
    cout << "Copy Constructor TournamentMember called." << endl;
    cout << "" << endl;

    strcpy(fname,sec.fname);
    strcpy(lname,sec.lname);
    strcpy(dob,sec.dob);

    weight = sec.weight;
    height = sec.height;

}//copy constructor

TournamentMember::~TournamentMember()
{
    cout << "Destructor TournamentMember called." << endl;
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


} //printing

//--end of class TournamentMember



//--Start of Class PLAYER
void Player::setGoals(int g)
{
    goals = g;
} //non in-line setter of Player


Player::Player()
{
    cout << "Empty constructor Player called." << endl;
    no = 0;
    pos = 0;
    goals = 0;
    foot = "right";
} //Default constructor


Player::
    Player(char* f,char* l,char* d,double w,double h,int n,int p,int g,string& ft):
    TournamentMember(f, l, d, w, h)
{
    cout << "Parametric constructor Player called. " << endl;
    no = n;
    pos = p;
    goals = g;
    foot = ft;

} //Parametric Constructor

Player::Player(const Player& sec):
    TournamentMember(sec)
{
    cout << "Copy constructor Player called." << endl;

    no = sec.no;
    pos = sec.pos;
    goals= sec.goals;
    foot = sec.foot;

}//Copy constructor

Player::~Player()
{
    cout << "Destructor Player called." << endl;
} //Destructor

void Player::print()
{
    TournamentMember::print();
    //superprint function

    cout << "Number = " << no << endl;
    cout << "Position = " << pos << endl;
    cout << "Number of goals = " << goals << endl;
    cout << "Foot = " << foot << endl;
    cout << "" << endl;

}//print Player details


void Player::GoalInc()
{
    goals++;
} //Increase no of goals

//--end of class Player

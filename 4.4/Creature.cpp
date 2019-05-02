/*
CH08-320142
Creature.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "Creature.h"

using namespace std;

//CREATURE

Creature::Creature(): distance(10)
{
    cout << "Empty constructor Creature is called." << endl;
}//constructor for Creature


Creature::~Creature()
{
    cout << "Destructor for Creature is called." << endl;
}//destructor for Creature


void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}//method run for Creature
//--- end of class Creature



//Class WIZARD

Wizard::Wizard() : distFactor(3)
{
    cout << "Empty Constructor Wizard is called." << endl;
}//constructor Wizard



Wizard::~Wizard()
{
    cout << "Destructor for Wizard is called." << endl;
}//destructor Wizard


void Wizard::hover() const
{
    int d = distFactor * distance;
    cout << "hovering " << d << " meters!\n";
}//method hover for Wizard

//-- end of class Wizard


//POKEMON

Pokemon:: Pokemon() : jump_height(5) //same as initializing jump_height=5
{
    cout << "Empty Constructor Pokemon is called." << endl;
}//constructor Pokemon



Pokemon:: ~Pokemon()
{
    cout << "Destructor for Pokemon is called." << endl;
}//destructor Pokemon


void Pokemon::jump() const
{
    int st = jump_height * distance;
    cout << "Jumping stamina for " << st << " meters!\n";
}//method jump for Pokemon

//---end of class Pokemon



//SPARROW

Sparrow:: Sparrow(): fly_height(10)
{
    cout << "Empty constructor Sparrow is called." << endl;
}//constructor Sparrow


Sparrow:: ~Sparrow()
{
    cout << "\nDestructor for Sparrow is called." << endl;
}//destructor Sparrow


void Sparrow::flight() const
{
    int fl = fly_height * distance;
    cout << "Covered flying distance " << fl << " meters!\n";
}//method flight for Sparrow

//--end of class Sparrow





/*
CH08-320142
testcreature.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/


#include "Creature.h"

using namespace std;

//MAIN implementation:

int main()
{
    cout << "Creating a Creature.\n";
    Creature c; //calling constructor c
    c.run(); //calling method of c

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //calling methods for Pokemon
    cout << "\nCreating a Pokemon.\n";
    Pokemon p;
    p.run();
    p.jump();


    //calling methods for Sparrow
    cout << "\nCreating a Sparrow.\n";
    Sparrow s;
    s.run();
    s.flight();

    return 0;
}


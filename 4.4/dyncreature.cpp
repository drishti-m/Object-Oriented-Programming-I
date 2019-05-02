/*
CH08-320142
dyncreature.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "Creature.h"

using namespace std;

//MAIN implementation:

int main()
{
    char user;
    bool repeat = true; //for infinite loop


    cout << "Creating a Creature.\n";
    Creature c; //calling constructor c
    c.run(); //calling method of c

    Wizard *w;
    Pokemon *p;
    Sparrow *s;


    while (repeat == true)
    {

        cout << "\nEnter a character:" << endl;
        cin >> user;
        cin.get();


        if (user == 'w')
        {
            cout << "\nCreating a Wizard.\n";
            w = new Wizard;


            w->run();
            w -> hover();
            //syntax due to pointers

        }//Wizard

        else if (user == '1')
        {
            cout << "\nCreating a Pokemon.\n";
            p = new Pokemon;

            p -> run();
            p -> jump();

        }//Pokemon

        else if (user == '2')
        {

            cout << "\nCreating a Sparrow.\n";
            s = new Sparrow;

            s -> run();
            s -> flight();

        }//Sparrow

        else if (user == 'q')
        {
            break;
        }//Quit program

        else
        {
            cout << "Invalid Input.\n" << endl;
        } //Invalid

    }

    delete w;
    delete p;
    delete s;
    //deallocation

    return 0;
}



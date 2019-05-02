/*
CH08-320142
testTournamentMember.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string>

int main()
{
    //check// char *fn;
    //fn = new char[31];
    // strcpy(fn, "Checkname");
//    cout << fn << endl;
    char fnam[31] = "Drishti";
    char lnam[31] = "Maharjan";
    char db[11] = "1999-11-07";
    //can't directly pass "Dishti",.. as parameters
    //because it is array of characters

    TournamentMember Player1(fnam, lnam, db, 60, 5.5);
    //Parametric Constructor

    cout << "Player details:" << endl;
    Player1.print();

    TournamentMember Referee;
    //Empty constructpr

    cout << "Default data of a tournament member: " << endl;
    Referee.print();

    TournamentMember Player2(Player1);
    //Copy Constructor

    Player2.Loc_Change("Nepal");
    //Change location

    cout << "Player details" << endl;
    Player2.print();
    //Print with updated data
//delete []fn;
    return 0;
}


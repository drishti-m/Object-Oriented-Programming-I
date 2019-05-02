/*
CH08-320142
testPlayer.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string>


int main()

{

    Player p1;
    //Player 1 (default constructor)

    char fn[31] = "Drishti" ;
    char ln[31] = "Maharjan";
    char dob[11] = "1999-11-07";
    string ft = "right";
    //data for Player 2

    Player p2(fn,ln,dob, 54, 5.5, 10, 2, 5, ft);
    //parametric constructor call


    Player p3(p2); //copy constructor
    p3.GoalInc(); //increase number of goals
    ft = "left";
    p3.setFoot(ft); //can't pass "left" directly
    p3.setFname((char*)"Jung");
    //forcing conversion to char*
    //to pass by value right type



    TournamentMember::Loc_Change("Bremen");
    //change location to Bremen


    cout << "" << endl;
    cout << "Details of Player 1: " << endl;
    p1.print();
    cout << "Details of Player 2: " << endl;
    p2.print();
    cout << "Details of Player 3: " << endl;
    p3.print();
    //print player details

    return 0;
}

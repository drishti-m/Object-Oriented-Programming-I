/*
CH08-320142
testReferee.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
#include <string>
#include <string.h>

int main()
{
    TournamentMember::Loc_Change("Bremen");

    Player *RedList[50];
    Player *YellowList[50];
    int ycc, rcc;
    char fn[31], ln[31], dob[11];
    string ft; //variables declaration

    cout << "Initializing 5 Players" << endl;
    cout << "" << endl;

    Player p1; //default Player

    strcpy(fn,"Drishti");
    strcpy(ln, "Maharjan");
    strcpy(dob, "1999-11-07");
    ft = "left"; //data for player 2
    Player p2(fn,ln,dob,60,5,2,4,1,ft); //Player 2

    strcpy(fn, "Martin");
    strcpy(ln, "Junior");
    strcpy(dob, "1997-05-11");
    ft = "right"; //data for Player 3
    Player p3(fn,ln,dob,55,6,3,2,3,ft); //Player 3

    Player p4(p3); //Player 4
    strcpy(fn, "Rediet");
    p4.setFname(fn);
    p4.setNo(4);
    p4.GoalInc();
    p4.setWeight(48);//changing some data for Player 4


    strcpy(fn, "Hele");
    strcpy(ln, "Dung"); //data for Player5
    Player p5(fn,ln,dob,48,5.4,5,4,2,ft);//Player5

    cout << "" << endl;
    cout << "Initialization of 5 Players done." << endl;
    cout << "" << endl;

    cout << "Setting a pre-existing list for YellowCard and RedCard."<< endl;
    cout << "" << endl;

    YellowList[0] = &p1;
    YellowList[1] = &p2;
    YellowList[2] = &p3;
    ycc = 3; //setting data for YellowCardList

    RedList[0] = &p4;
    rcc = 1; //setting data for RedCardList

    strcpy(fn, "Ramu");
    strcpy(ln, "Pandey");
    strcpy(dob, "1990-03-28");
    ft = "right"; //data for referee
    Referee r(fn,ln,dob,65, 6.1, ycc,YellowList,rcc, RedList); //Referee
    cout << "Created a referee." << endl;

    //add p2 to YellowCardList:
    cout << "" << endl;
    cout << "Player 2, " << p2.getFname() << " gets a yellow card." << endl;
    r.addToYellowCardList(&p2);
    cout << "" << endl;
    r.print(); //prints effect of above actions

    //add p5 to YellowCardList
    cout << "" << endl;
    cout << "Player 5, " << p5.getFname() <<" gets a yellow card." << endl;
    r.addToYellowCardList(&p5);
    cout << "" << endl;
    r.print();//demonstrate effects

    //add p4 to RedCardList
    cout << "" << endl;
    cout << "Player 4, "<<p4.getFname()<<" gets a red card." << endl;
    r.addToRedCardList(&p4);
    cout << "" << endl;
    r.print();//demonstrate effects
    cout << "" << endl;

    return 0;
}

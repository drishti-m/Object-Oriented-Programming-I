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


//----Start of class TournamentMember
TournamentMember::TournamentMember()
{
    cout << "Empty Constructor TournamentMember called." << endl;

    //used strcpy instead of assignment so that
    //pointers don't mess up
    strcpy(fname, "John");
    strcpy(lname, "Crue");
    strcpy(dob, "1999-01-01");

    weight = 60;
    height = 5;

}//empty constructor

TournamentMember::TournamentMember(char* f, char* l, char* d, double w, double h)
{
    cout << "Parametric constructor TournamentMember called." << endl;

    strcpy(fname,f);
    strcpy(lname,l);
    strcpy(dob,d);

    weight = w;
    height = h;
}//parametric constructor

TournamentMember::TournamentMember(const TournamentMember& sec)
{
    cout << "Copy Constructor TournamentMember called." << endl;

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


} //printing member's primary details

//----end of class TournamentMember



//----Start of Class PLAYER
Player::Player()
{
    cout << "Default constructor Player called." << endl;
    no = 1;
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
    TournamentMember()
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

void Player::setGoals(int g)
{
    goals = g;
} //non in-line setter of Player

void Player::print()
{
    TournamentMember::print();
    //superprint function

    cout << "Number = " << no << endl;
    cout << "Position = " << pos << endl;
    cout << "Number of goals = " << goals << endl;
    cout << "Foot = " << foot << endl;
    cout << "" << endl;

}//prints Player details


void Player::GoalInc()
{
    goals++;
} //Increase no of goals

//----end of class Player



//----start of class REFEREE
Referee::Referee(): TournamentMember()
{
    cout << "Empty constructor Referee called." << endl;
    yellowCardCount = 0;
    redCardCount = 0;

} //Empty constructor

Referee::
Referee(char* f,char* l,char* d,double w,double h,int ycc, Player* ycl[50], int rcc, Player* rcl[50]):
    TournamentMember(f,l,d,w,h)
{
    yellowCardCount = ycc;
    redCardCount = rcc;

    for(int i = 0; i < ycc; i++)
        yellowCardList[i] = ycl[i];
    //copying elements of array one by one
    //no other mechanism to copy directly

    for(int  i = 0; i < rcc; i++)
        redCardList[i] = rcl[i];
} //Parametric Constructor

//setters and getters
void Referee::setYcc(int ycc)
{
    yellowCardCount = ycc;
}

void Referee::setRcc(int rcc)
{
    redCardCount = rcc;
}

int Referee::getYcc()
{
    return yellowCardCount;
}

int Referee::getRcc()
{
    return redCardCount;
}


bool Referee::addToYellowCardList(Player *p)
{
    int check = 0;
    int pos = 0;

    for (int i = 0; i < yellowCardCount; i++)
    {
        if (yellowCardList[i] == p)
        {
            check++;
            pos = i;
        } //pos = array index of the player in the yellowcardlist

    } //to check if player is already in the yellow card list


    if (check == 0)
    {
        yellowCardList[yellowCardCount] = p;
        yellowCardCount++;

        cout << "This player is added to YellowCard List." << endl;

        return true;

    } //adds to list if player doesn't exist in yellowcardlist

    else
    {
        cout << "This player is already in the yellow card list." << endl;
        cout << "Removing player from yellow card list." << endl;

        for (int j = pos; j < yellowCardCount; j++)
        {
            yellowCardList[j] = yellowCardList[j+1];
        }//deleting 'pointer to the player' from the YellowCardList

        yellowCardCount--;
        //one member removed from yellow card list

        cout << "Moving player to Red card list." << endl;

        addToRedCardList(p);
        //adds player to redcardlist

        return false;
    }//no addition in Yellowcardlist

}


bool Referee::addToRedCardList(Player *p)
{
    int check = 0;
    int i = 0;

    for (; i < redCardCount; i++)
    {
        if (redCardList[i] == p)
        {
            check++;
        }
    }//to check if player is already in the RedCardList

    if (check == 0)
    {
        redCardList[redCardCount] = p;
        cout << "This player is now added to Red Card List." << endl;
        redCardCount++;

        return true;

    }//addition to RedCardList if player doesn't pre-exist in the list

    else
    {
        cout << "This player already exists in the Red Card List." << endl;

        return false;
    }//no addition if player pre-exists in the list

}

void Referee::print()
{
    string fn, ln;

    cout << "Players in the latest yellow card List: " << endl;

    for (int i = 0; i < yellowCardCount; i++)
    {
        fn = yellowCardList[i]->getFname();
        ln = yellowCardList[i]->getLname();

        cout << fn << " " << ln << endl;
    }//printing names of players in the YellowCardList

    cout << "" << endl;
    cout << "Players in the latest red card list: " << endl;

    for (int i = 0; i < redCardCount; i++)
    {
        fn = redCardList[i]->getFname();
        ln = redCardList[i]->getLname();

        cout << fn << " " << ln << endl;
    }//printing names of players in the RedCardList
}

//----End of Class Referee

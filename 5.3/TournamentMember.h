
/*
CH08-320142
TournamentMember.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H
#include <string>
#include <string.h>

using namespace std;

class TournamentMember
{
private:
    char fname[31];
    char lname[31];
    char dob[11];
    double weight; //additional properties
    double height;


    static string location;

public:
    TournamentMember(); //constructors
    TournamentMember(char*, char*, char*, double, double);
    TournamentMember(const TournamentMember&);
    ~TournamentMember(); //destructor

    void setFname(char*);//setters
    void setLname(char*);
    void setDob(char*);
    void setWeight(double);
    void setHeight(double);

    char* getFname(); //getters
    char* getLname();
    char* getDob();
    double getWeight();
    double getHeight();

    static void Loc_Change(const string& c); //update location
    void print(); //printing method

};

class Player: public TournamentMember //Player is an inherited class of TournamentMember
{
private:
    int no;
    int pos;
    int goals;
    string foot;

public:
    Player(); //constructors
    Player(char*, char*, char*, double, double, int, int, int, string&);
    Player(const Player&);
    ~Player(); //destructors

    void setNo(int); //setters
    void setPos(int);
    void setGoals(int);
    void setFoot(string&);

    int getNo(); //getters
    int getPos();
    int getGoals();
    string getFoot();

    void print(); //print method
    void GoalInc(); //increase no of goals

};

//note: string TournamentMember::location = "Germany";
//can't initialize here like line above because
//header file is only for giving information
//can't put executable parts in here



//--Start of inline methods for TournamentMember
inline void TournamentMember::setFname(char* fn)
{
    strcpy(fname, fn);
}//protecting class privacy as we are using pointers
//safe way to copy the data

inline void TournamentMember::setLname(char* ln)
{

    strcpy(lname, ln);

}

inline void TournamentMember::setDob(char* d)
{

    strcpy(dob, d);

}

inline void TournamentMember::setWeight(double w)
{
    weight = w;
}

inline void TournamentMember::setHeight(double h)
{
    height = h;
}

inline char* TournamentMember::getFname()
{
    return fname;
}

inline char* TournamentMember::getLname()
{
    return lname;
}

inline char* TournamentMember::getDob()
{
    return dob;
}

inline double TournamentMember::getWeight()
{
    return weight;
}

inline double TournamentMember::getHeight()
{
    return height;
}
//--end of Inline Methods for TournamentMember



//--Start of Inline Methods for Player
inline void Player::setNo(int n)
{
    no = n;
}

inline void Player::setPos(int p)
{
    pos = p;
}


inline void Player::setFoot(string& f)
{
    foot = f;
}

inline int Player::getNo()
{
    return no;
}

inline int Player::getPos()
{
    return pos;
}

inline int Player::getGoals()
{
    return goals;
}

inline string Player::getFoot()
{
    return foot;
}
//--end of Inline methods for Player

#endif


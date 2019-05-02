
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

//string TournamentMember::location = "Germany";
//can't initialize here like line 51 because
//header file is only for giving information
//can't put executable parts in here



//--start of inline methods outside class

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
//--end of inline methods

#endif

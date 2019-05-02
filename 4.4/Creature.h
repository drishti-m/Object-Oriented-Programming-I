/*
CH08-320142
Creature.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

//Class definition of Creature
class Creature
{
public:
    Creature();
    void run() const;
    ~Creature();

protected:
    int distance;
};
//-- end of Class Creature


//Class definition of Wizard
class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;
    ~Wizard();

private:
    int distFactor;
};


//Class definition of Pokemon
class Pokemon : public Creature
{
public:
    Pokemon();
    void jump() const;
    ~Pokemon();

private:
    int jump_height;
};


//Class definition of Sparrow
class Sparrow : public Creature
{
public:
    Sparrow();
    void flight() const;
    ~Sparrow();

private:
    int fly_height;
};



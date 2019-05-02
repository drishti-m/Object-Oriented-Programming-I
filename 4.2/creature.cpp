/*
CH08-320142
creature.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/


//Class declaration

#include <iostream>

using namespace std;

//Class declaration of Creature

class Creature
{
public:

    Creature();
    void run() const;
    ~Creature();

protected:

    int distance;
};


//Class definition:

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

//--end of class Creature




//WIZARD
//Class declaration of Wizard
class Wizard : public Creature
{
public:

    Wizard();
    void hover() const;
    ~Wizard();

private:

    int distFactor;
};


//Class definition of Wizard

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

//--End of Class Wizard




//POKEMON

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


//Class definition of Pokemon

Pokemon:: Pokemon() : jump_height(5)
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

//--end of class Pokemon




//SPARROW

//Class declaration of Sparrow
class Sparrow : public Creature
{
public:

    Sparrow();
    void flight() const;
    ~Sparrow();

private:

    int fly_height;
};


//Class Definition


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

//-- end of class Sparrow




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


    cout << "\nCreating a Pokemon.\n";
    Pokemon p;
    p.run();
    p.jump(); //calling methods for Pokemon



    cout << "\nCreating a Sparrow.\n";
    Sparrow s;
    s.run();
    s.flight(); //calling methods for Sparrow

    return 0;
}

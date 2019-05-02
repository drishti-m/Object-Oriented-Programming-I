/*
CH08-320142
Critter.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <string>
class Critter
{
private: //data

    std::string name;
    double hunger; //internally storing hunger as double
    int boredom;
    double height;

    //methods for internal conversion
    double int2doub(int);
    int doub2int(double);

public:

    //constructor definitions:

    Critter();
    Critter(std::string&);
    //note: used referencing so that constructor will not copy,
    //and just reference is passed -> more efficient
    Critter(std::string&, int hunger, int boredom, double height = 15);
    //data type of hunger for public interface is still integer


    // setter methods
    void setName(std::string& newname);
    void setHunger(int h);
    //variable named 'h' to show that it doesn't have to
    //have the same variable name used in Critter.cpp
    void setBoredom(int newboredom);
    //variable named 'newboredom' to show that
    //it can also have the same variable used in Critter.cpp
    void setHeight(double);
    //defining data type only is enough as well


    //getter methods
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();


    // service: print method
    void print();
};


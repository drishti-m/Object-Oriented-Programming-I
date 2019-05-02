/*
CH08-320142
Box.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <string>

using namespace std;

class Box
{
private:
    double height, width, depth;

public:
    //constructors:
    Box();
    Box(double, double, double);

    //setters:
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);

    //getters:
    double getHeight();
    double getWidth();
    double getDepth();

    //calculation method
    double Volume();


    //printing method
    void print();

    //destructor:
    ~Box();
};


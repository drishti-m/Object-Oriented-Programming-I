/*
CH08-320142
Box.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <iostream>
#include "Box.h"

using namespace std;

//defining setters:
void Box:: setHeight(double bheight)
{
    height = bheight;
}

void Box:: setWidth(double bwidth)
{
    width = bwidth;
}

void Box:: setDepth(double bdepth)
{
    depth = bdepth;
}


//defining getters:
double Box:: getHeight()
{
    return height;
}

double Box:: getWidth()
{
    return width;
}

double Box:: getDepth()
{
    return depth;
}


//defining calculation method 'Volume'

double Box:: Volume() //no need of parameters because method of object which already has properties
{
    double vol = height * width * depth;
    return vol;
}

//print method
void Box:: print()
{
 cout << "Volume for this box is " << Volume() << endl;
 //calls the method 'Volume' in 'Box.cpp'
}

//Empty constructor
 Box:: Box() //initializing
{
    height = 1;
    width = 1;
    depth = 1;

}

//Constructor with all set properties
Box:: Box(double cheight, double cwidth, double cdepth)
{
    height = cheight;
    width = cwidth;
    depth = cdepth;

}

//Destructor
Box::~Box()
{
cout << "Destructor is called. " << endl;
}


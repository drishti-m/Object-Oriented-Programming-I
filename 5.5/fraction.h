/*
CH08-320142
fraction.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
// simple class for fractions
#include <iostream>
#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;
class Fraction
{

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator

    int gcd(int a, int b);	  	// calculates the gcd of a and b
    int lcm(int a, int b);      //calculates lcm

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    // integers. Denominator by default is 1


    //operator overloading
    friend ostream& operator<<(ostream& out, const Fraction&);
    friend istream& operator>>(istream& in,Fraction&);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);

};


#endif /* FRACTION_H_ */

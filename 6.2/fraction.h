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

private:

    int num;
    int den;

    int gcd(int a, int b);
    // calculates the gcd of a and b
    int lcm(int a, int b);
    //calculates lcm

public:

    Fraction();
    // empty constructor
    Fraction(int, int = 1);
    // constructor taking values for fractions and
    // integers. Denominator by default is 1
    ~Fraction();


    //operator overloading
    friend ostream& operator<<(ostream& out, const Fraction&);
    friend istream& operator>>(istream& in,Fraction&);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);

    //alternative can be used both for + and -
    //friend Fraction operator+(const Fraction& f1, const Fraction& f2);

    Fraction operator+(const Fraction& f1);
    //can be a member or a friend
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    Fraction& operator=(const Fraction&);
    //must be a member
    bool operator<(const Fraction&);
    //should be member
    bool operator>(const Fraction&);
    //should be member

};


#endif /* FRACTION_H_ */


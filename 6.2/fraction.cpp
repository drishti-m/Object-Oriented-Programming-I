/*
CH08-320142
fraction.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
    cout << "Default constructor called." << endl;
}//empty constructor

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
    cout << "Parametric constructor called." << endl;
}//parametric constructor

Fraction::~Fraction()
{
    cout << "" << endl;
    cout << "Destructor called." << endl;
}//destructor

int Fraction::gcd(int a, int b)
{

    int tmp_gcd = 1;

    //gcd implementation
    while (b != 0)
    {
        tmp_gcd = b;
        b = a % b;
        a = tmp_gcd;
    }
    tmp_gcd = a;

    return tmp_gcd;
}//GCD of 2 numbers


int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}//LCM of 2 numbers

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << f.num << "/" << f.den;
    return out;
}//overloading <<

std::istream& operator>>(std::istream& in, Fraction& f)
{
    in >> f.num >> f.den;
    //input num & denom

    //check validity
    if (f.den == 0)
    {
        f.num = 1;
        f.den = 1;
        return in;
    }//invalid input

    int tmp_gcd = f.gcd(f.num, f.den);
    f.num = f.num / tmp_gcd;
    f.den = f.den / tmp_gcd;
    //num & den in reduced form

    return in; //fraction
}//overloading >>

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.num, f1.den * f2.den);

}//multiplication of 2 fractions
 //overloading *

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.den, f1.den * f2.num);
}//division of 2 fractions
 //overloading /


Fraction Fraction::operator+(const Fraction& f1)
{
    int a = f1.num;
    int b = f1.den;
    int c = num;
    int d = den;

    int newnum = (a *d) + (b * c);
    int newden = b * d;

    return Fraction(newnum, newden);

} //addition of fractions
  //overloading +

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
    int newnum = (f1.num * f2.den) - (f2.num * f1.den);
    int newden = f1.den * f2.den;

    return Fraction(newnum,newden);
}//subtraction of fractions in reduced form
 //overloading -

Fraction& Fraction::operator=(const Fraction& f2)
{
    this->num = f2.num;
    this->den = f2.den;

    return *this;
    //returns a reference to the current instance
}//overloading =

bool Fraction::operator<(const Fraction& f2)
{
    if ((num * f2.den) //num = this->num i.e. current object's num
            < (f2.num * den))
        return true;

    else
        return false;
}//returns true if first fraction is lesser than second
 //overloading <

bool Fraction::operator>(const Fraction& f2)
{
    if ((num * f2.den)
            > (f2.num * den))
        return true;

    else
        return false;
}//return true if current object(fraction) is greater than
//the fraction passed as parameter
 //overloading >



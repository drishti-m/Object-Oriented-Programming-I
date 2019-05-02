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

}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << f.num << "/" << f.den;
    return out;
}

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
    }//in case of invalid input

    int tmp_gcd = f.gcd(f.num, f.den);
    f.num = f.num / tmp_gcd;
    f.den = f.den / tmp_gcd;
    //num & den in reduced form

    return in;
}//returns fraction in reduced form

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.num, f1.den * f2.den);

}//multiplication of 2 fractions

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.den, f1.den * f2.num);
}//division of 2 fractions



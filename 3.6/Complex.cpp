
/*
CH08-320142
Complex.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

//default constructor
Complex::Complex()
{
    real = 0.0 ;
    imag = 0.0 ;
    //cout << "Empty constructor called." << endl;
}

//parametric constructor
Complex::Complex(float creal, float cimag)
{
    real = creal;
    imag = cimag;
    //cout << "Parametric  constructor called." << endl;
}

//copy constructor
Complex::Complex (const Complex& second)
{
    real = second.real;
    imag = second.imag;
   // cout << "Copy constructor called." << endl;
}

//destructor
Complex::~Complex()
{}

//overloading output operator
std::ostream& operator<<(std::ostream& out, const Complex& f)
{
    if (f.imag)
    {
        out << noshowpos << f.real << showpos << f.imag << "i" << endl;
    } //if imaginary part exists
    else
    {
        out << noshowpos << f.real << endl;
    }

    return out;
}


//overloading >>
std::istream& operator>>(std::istream& in, Complex& f)
{
    in >> f.real >> f.imag;
    //input real and imag

    return in;
}

//method called within a method, where second refers to an instance:
//like 'this' operator
Complex Complex:: operator*(const Complex& second)
{
    float new_r = real * second.real;
    float new_i = imag * second.imag;

    return Complex(new_r, new_i);

}//multiplication of 2 complex numbers

Complex Complex:: operator+(const Complex& second)
{
    float new_r = real + second.real;
    float new_i = imag + second.imag;
    return Complex(new_r, new_i);

} //addition of 2 complex no

Complex Complex:: operator-(const Complex& second)
{

    float new_r = real - second.real;
    float new_i = imag - second.imag;
    return Complex(new_r, new_i);

} //subtraction of 2 complex no

//setters
void Complex:: setReal(float creal)
{
    real = creal;
}

void Complex:: setImag(float cimag)
{
    imag = cimag;
}

//getters
float Complex:: getReal()
{
    return real;
}

float Complex:: getImag()
{
    return imag;
}

//printing complex number
void Complex:: print()
{

    if (imag)
    {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    } //if imaginary part exists
    else
    {
        cout << noshowpos << real << endl;
    }
}


//conjugation
Complex Complex:: conjugation()
{
    float new_i = -1 * imag;
    return Complex(real, new_i); //calling Para constr to set new values

}




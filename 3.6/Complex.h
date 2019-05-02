/*
CH08-320142
Complex.h
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex(); //default constructor
    Complex(float, float); //parametric constructor
    Complex (const Complex&); //copy constructor
    ~Complex(); //destructor


    void setReal(float);
    void setImag(float);
    float getReal();
    float getImag();

    void print();
    Complex conjugation();


    //overloaded operators:
    Complex operator*(const Complex& f2); //multiplication
    Complex operator+(const Complex& f2); //addition
    Complex operator-(const Complex& f2); //subtraction
    friend ostream& operator<<(ostream& out, const Complex&); //output
    friend istream& operator>>(istream& in, Complex&); //input


};

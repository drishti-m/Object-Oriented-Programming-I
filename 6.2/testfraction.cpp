/*
CH08-320142
testfraction.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a;
    Fraction b;

    cout << "" << endl;
    cout << "Enter numerator & denominator" <<
         " separated by space." << endl;

    cout << "Enter first fraction:" << endl;
    cin >> a;

    cout << "Enter second fraction:" << endl;
    cin >> b;

    cout << "Fractions you entered: " << endl;
    cout << a << " & " << b << endl;

    cout << "Product of 2 fractions = " << a * b << endl;
    cout << "Quotient of 2 fractions = " << a / b << endl;

    cout << "" << endl;
    Fraction sum = a + b; //overloaded =, + operator
    Fraction diff = a - b; //overloaded =,-

    cout << "Sum of 2 fractions = " << sum << endl;
    cout << "Difference of 2 fractions = " << diff << endl;
    cout << "" << endl;

    cout << "Greater fraction = " << endl;

   //prints greater fraction:
    if (a > b) // '>' overloaded operator
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;

}

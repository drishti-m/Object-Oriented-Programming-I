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
    //creating 2 objects of fraction:
    Fraction a;
    Fraction b;

    //using overloaded operators >> & <<
    cout << "" << endl;
    cout << "Enter numerator & denominator " <<
         "separated by space." << endl;

    cout << "Enter first fraction:" << endl;
    cin >> a;

    cout << "Enter second fraction:" << endl;
    cin >> b;

    cout << "Fractions you entered: " << endl;
    cout << a << " & " << b << endl;

    //using overloaded operators * and /
    cout << "Product of 2 fractions = " << a * b << endl;
    cout << "Quotient of 2 fractions = " << a / b << endl;

    return 0;

}

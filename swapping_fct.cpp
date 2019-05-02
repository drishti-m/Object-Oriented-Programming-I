
/*
CH08-320142
swapping_fct.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

void swapping(int &a, int &b)
{
    int temp = a; //temp has value of a
    a = b;  // a has value of b
    b = temp; //b now has value of temp

    return;


} // swap integers

void swapping(double &x, double &y)
{
    double temp = x;
    x = y;
    y = temp;

    return;

} // swap doubles

void swapping(const char*  &str1, const char* &str2)
// real call by reference by passing parameters by reference
{
    const char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;

    return;

} // swap char pointers

int main(void)
{
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";

    //printing values of variables before swapping

    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    swapping(a, b);
    //called when integers are passed
    swapping(x, y);
    //called when doubles are passed
    swapping(str1, str2);
    //called when strings are passed


    //printing values of variables after swapping

    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}


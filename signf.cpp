
/*
CH08-320142
signf.cpp (Problem 1.3)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

int sign(int x);

int main()
{
    int x;
    cin >> x;
    cout << "The absolute value of " << x << " is " << sign(x) << endl;

    return 0;


}

int sign(int x)
{
    int absolute;

    if (x < 0)
    {
        absolute = (-1) * x;

    }
    else
    {

        absolute = x;
    }
    return absolute;
}


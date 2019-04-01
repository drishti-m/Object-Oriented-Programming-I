/*
CH08-320142
problem 1.2.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    int nr, i;
    float val;
    //declaring variables

    string s;
    cin >> nr;
    cin >> val;
    cin >> s;

//loop from 1 to nr
    for (i = 0; i < nr; i++)

    {

        cout << val << " " << s << endl;
        //prints val separated by s nr times

    }

    return 0;
}

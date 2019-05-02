/*
CH08-320142
concloop.cpp (1.5)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char c;
    bool stop; //boolean variable to control the loop
    stop = false;
    string final_str = "";
    //empty string so that the final string doesn't take value from trash

    while (stop == false) //loop stops when stop == false
    {
        cin >> c; //takes character as input
        cin.get();

        if (c == 'q') //loop stops when character c = 'q'
        {
            stop = true;
        }

        else
        {
            final_str += c; //concatenating to a new string
        }
    }

    cout << final_str << endl; //prints the concatenated string

    return 0;

}

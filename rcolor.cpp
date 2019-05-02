/*
CH08-320142
rcolor.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string ran_color(); //declaration of function

int main()
{

    srand(static_cast<unsigned int> (time(0)));
    //setting start time of algorithm as 0

    cout << "Generating colors randomly: " << endl;
    cout << "" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout <<  ran_color() << endl;
        //prints random color

    } //clls function 10 times

    return 0;
}

string ran_color()
{
    int random;
    string r_color;
    string color[4] = {"RED", "GREEN", "BLUE", "YELLOW"};

    random = rand() % 4;
    //generates random number between 0 and 4

    r_color = color[random];
    //picks any one value from the array

    return r_color;
    //returns randomly generated color

}

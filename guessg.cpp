/*
CH08-320142
guessg.cpp (a1_p6)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random_number, guess, trial = 0;
    bool right = false;
    string name;

    cout << "Hello Player, enter your name: " << endl;
    getline(cin,name); //name of player


    srand(static_cast <unsigned int> (time(0)));
    random_number = rand() % 100 + 1; //generating random number between 1 and 100
    //syntax: rand % (how many numbers are included in the range) + (lowest number in the range)

    cout << "Guess any number between 1 and 100:" << endl;


    //right loop controls looping of guesses
    while (right == false)
    {
        cin >> guess;
        trial++;

        if (random_number == guess)
            //if the payer makes the right guess:
        {
            cout << "Right guess, " << name <<"!" << endl;
            cout << "Congratulations, you made the right guess in " << trial << " attempt(s)." << endl;
            //displaying remarks and number of attempts

            right = true;
            trial = 0;

            break;
            //exiting loop if right guess is made
        }

        else //giving hints on the number range, when incorrect guess
        {

            if (guess > random_number)
            {
                cout << "Incorrect! Your guess is too high." << endl;
            }

            else
            {
                cout << "Incorrect guess. Your guess is too low." << endl;
            }


            cout << "Make another guess:" << endl;
        }

    }


    return 0;


}


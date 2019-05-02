/*
CH08-320142
a2_p4.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
//header for random numb generation


using namespace std;

int main()
{
    string arr_string[15] = {"computer", "television", "keyboard","magazine", "book"};

    int i, j;
    int random_position;
    string random_string, temp_string;
    char vow;
    string guess;
    bool attempt = false;
    int trial = 1;
    bool repeat = true;
    char again;
    //variable declaration

    cout << "Enter 10 words of your choice" << endl;

    //storing 10 words in the string array
    for (i = 5; i < 15; i++)
    {

        getline(cin, arr_string[i]);

    }

    //repeat bool is used to control looping of the entire guessing game
    while (repeat == true)
    {

        srand (static_cast <unsigned int>(time (0)));

        random_position = rand() % 15; //generates a random number between 0 and 14

        //generating random string from the list using its random index
        random_string = arr_string[random_position];
        temp_string = random_string;
        int length = random_string.length();
        //size of the random string


        for (j = 0; j < length; j++)
        {
            vow = random_string[j];

            //replacing all vowels with '_'
            if ((vow == 'a') || (vow == 'e') || (vow == 'i') || (vow == 'o') || (vow == 'u')
                    || (vow == 'A') || (vow == 'E') || (vow == 'I') || (vow == 'O') || (vow == 'U'))

            {
                random_string[j] = '_';
            }
        }

        cout << "Guess the word: " << random_string << endl;
        //displays word for the user to guess

        //attempt bool to control loop for wrong guess attempts
        while (attempt == false)
        {

            getline(cin,guess);


            if (guess == temp_string)
            {
                cout << "Congratulations, you have guessed in " << trial << " attempt(s)." << endl;
                cout << "Do you want to play again? Type 'Y' for yes, 'N' for no." << endl;

                cin >> again;
                cin.get();

                if ((again == 'N') || (again == 'n'))
                {
                    repeat = false;
                    attempt = true;
                    break;

                    //exits the attempt loop via break
                    // exits the repeat loop by changing value of repeat
                }

                else if ((again == 'Y') || (again == 'y'))
                {
                    trial = 1;

                    //resets the number of trials

                    break;
                }

            }

            else if (guess == "quit")
            {
                repeat = false;
                //to come out of the repeat loop
                break;
                //break exits from attempt loop
            }
            else
            {
                cout << "Your guess was wrong. Make another guess:" << endl;
                trial++;

                //increments number of trials
                //repeats the attempt loop
            }
        }
    }
    return 0;
}

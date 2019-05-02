/*
CH08-320142
a2_p5.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    int i, length;
    string check_str = "";
    char check_char;
    length = s.length();
    bool result;

    //reversing the string
    for (i = (length-1); i >= 0; i--)
    {
        check_char = s[i];
        check_str += check_char;
    }

    //checking if reverse string and actual string are equal

    if (check_str == s)
    {
        result = true;
    }
    else
    {
        result = false;
    }

    return result;
}


int main()
{
    string s;
    bool repeat = true;
    bool result;

    //repeat loop to control the loop for checking palindrome
    while (repeat == true)
    {
        cout << "Enter a word for palindrome check: " << endl;

        getline(cin, s);

        //exits loop if user enters "quit"
        if (s == "quit")
        {
            repeat = false;
            break;
        }

        else
        {
            result = isPalindrome(s);
            //calling function isPalindrome
            //It returns True if palindrome and False if not.


            //displaying output for user
            if (result == true)
            {
                cout << "The word is palindrome. " << endl;

            }

            else
            {
                cout << "The word is not palindrome." << endl;
            }

        }
    }

    return 0;
}

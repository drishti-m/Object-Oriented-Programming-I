/*
CH08-320142
overloading_myfirst.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

int myfirst(int arr_int[])
//function called when parameter passed is array of integers
{
    int i;
    int count = -1;
    int length = 5 ;


    for (i = 0; i < length; i++)
        //loop to run through sequence of integers from array until value is found
    {

        if ((arr_int[i] > 0) && ((arr_int[i] % 2) != 0))
            //if it is positive and odd
        {
            count = arr_int[i];
            break;
            //after finding the first element, loop is exited
        }

    }
    return count;
    //returns -1 if required value is not found, and returns value if found
}

double myfirst(double arr_double[])
{
    int i;
    int count = -1.1;
    int length = 5;

    for (i = 0; i < length; i++)
        //loop to run through each element in the list unless value is found
    {
        double check = arr_double[i];

        if ((check == int (check)) && (check > 0))
            // if the value has no fractional part and is positive
        {
            count = arr_double[i];

            break;
            //exits loop once required value is found
        }

    }
    return count;
    //returns -1.1 if expected value is not found
}

char myfirst (char arr_chars[])
{
    int i = 0;
    char count = '0';
    int length = 5;


    for (i = 0; i < length; i++)
    {
        char check = arr_chars[i];
        //extracting element for checking

        if ((check == 'a') || (check == 'e') || (check == 'i') || (check == 'o') || (check == 'u'))
            //if character is a vowel
        {
            count = arr_chars[i];
            break;
            //exits loop when vowel is found

        }

    }
    return count;
    //return vowel character if it found, otherwise, returns '0'.
}

int main()
{
    int arr_int[5] = {2, -1, 4, 1, 3};
    //initializing a list of integers

    double arr_double[5] = {2,1.2, 3.3, -1.3, 6};
    //initializing a list of doubles

    char arr_chars[5] = {'j', 'b', 'a', 'f', 'z'};
    //initializing a list of characters

    cout << myfirst(arr_int) << endl;
    //calls this function when array of integers is passed

    cout << myfirst(arr_double) << endl;
    //calls this function when array of doubles is passed

    cout << myfirst(arr_chars) << endl;
    //calls this function when array of characters is passed

    return 0;
}

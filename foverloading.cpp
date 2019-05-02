/*
CH08-320142
foverloading.cpp (1.4)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
using namespace std;


int mycount(int var1, int var2) //this function is called when integers are passed as parametre
{
    int difference = var1 - var2; //difference of first and second parameter
    return difference;
}

int mycount(string var1,char var2)
{
    int length_str = var1.length();  //length of string var1
    int i, count = 0;

    for (i = 0; i < length_str; i++) //loops from first character to last character of string var1
    {
        if (var2 == var1[i])  //if the character is present in the string
        {
            count++;
        }


    }

    if (count == 0) //when no occurrences are found
    {
        return -1;
    }
    else
    {
        return count;
    }
}



int main()
{
    int first_int, second_int;
    string first_string;
    char first_char;
    //declaring variables


    cin >> first_int;
    cin >> second_int;
    //reads integers as input


    cin.get(); //used to remove the white space caused while entering second_int
    getline(cin, first_string); //reads until '/n' is encountered


    cin >> first_char; //reads character input by user

    cout << mycount(first_int,second_int) << endl; //this function is called when parameters are integers
    cout << mycount(first_string, first_char) << endl; //this functions is called when string and character are passed

    return 0;
}


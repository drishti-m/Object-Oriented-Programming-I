/*
CH08-320142
dynallocref.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>

using namespace std;

void deallocate(int* &x)
{
    delete []x;
    cout << "deleting" << endl;
}
//deallocates memory for array x

void add_min(int* &x, int n)
{
    int i = 0;
    int min = x[i];
    //initializing min as the first element

    for (i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    cout << "min is" << min << endl;

    //finds the minimum value from the array and assigns it to min

    for (i = 0; i < n; i++)
    {

        x[i] = x[i] + min;
    }

    //adds the minimum value to all elements of the array
}

int main()
{
    int n, i;

    cout << "Enter the number of integers you want" << endl;
    cin >> n;

    int* x = new int[n];
    //dynamically allocating memory for x[n]

    cout << "Enter " << n << " integers" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    //takes n numbers of integers and stores in array x

    add_min(x, n);
    //calls the function to find minimum and adds it to every element
    //changes the values of the array x as it is passed by reference



    for (i = 0; i < n; i++)
    {
        cout << x[i] << endl;
    }

    //prints the new values of array x



    deallocate(x);
    //calls the function to deallocate memory for array x

    return 0;
}



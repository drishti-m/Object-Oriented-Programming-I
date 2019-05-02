/*
CH08-320142
copyconstructor.cpp
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

//class declaration
class NaiveString
{
private:
    char *str;

public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString();

    void update(char, char);
    void print();
};


//class definition


NaiveString::NaiveString(const char* t)
{
    str = new char[strlen(t) + 1];
    strcpy(str, t);

    cout << "First parametric constructor is called." << endl;
}//parametric constructor

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src)
{
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);

    cout << "Copy constructor is called. " << endl;


    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}//copy constructor


NaiveString:: ~NaiveString()
{
    delete []str;
    cout << "Destructor is called." << endl;

} //dynamic allocation in class definition
//so, deallocation should also be in class defn and not main



void NaiveString::update(char oldchar, char newchar)
{
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}// replaces occurrences of oldchar by newchar


void NaiveString::print()
{
    cout << str << endl;
}//prints string


void funcByVal(NaiveString s)
{
    cout << "funcbyval() being called" << endl;
    s.update('B', 'C');
    cout << "Updated value out of main: " << endl;
    s.print();
}//Passing by value


void funcByRef(NaiveString& s)
{
    cout << "funcbyref() being called" << endl;
    s.update('B', 'C');
    cout << "Updated value out of main: " << endl;
    s.print();
}//Passing by reference


//Main implementation:

int main(int argc, char** argv)
{
    NaiveString a("aBcBdB"); //parametric constructor call
    a.print();
    cout << "" << endl;

    NaiveString b(a);
    //Copy constructor call
    //Object a copied to b

    cout << "Initially, value in 2nd object = " << endl;
    b.print();
    cout << "" << endl;


    //effect of passing by value
    cout << "About to call funcbyval():" << endl;
    funcByVal(a);
    cout << "In main, the value = " << endl;
    a.print(); //value of a after passing by value
    cout << "" << endl;

    funcByVal(b);
    cout << "In main, the value = " << endl;
    b.print(); //value of b after passing by value
    cout << "" << endl;


    //effect of passing by reference:
    cout << "About to call funcbyref()" << endl;
    funcByRef(a);
    cout << "In main, the value = " << endl;
    a.print(); //a after passing by reference
    cout << "" << endl;

    funcByRef(b);
    cout << "In main, the value = " << endl;
    b.print(); //b after passing by reference



    return 0;

}

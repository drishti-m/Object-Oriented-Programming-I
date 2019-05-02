/*
CH08-320142
City.h (problem 3.1)
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <string>

using namespace std;

class City
{
private:
    string name;
    int no_of_citizens;
    string location;
    string poi;

public:
    //setters for City
    void setName(string& newname);
    void setNoOfCitizens(int newno_of_citizens);
    void setLocation(string& location);
    void setPoi(string& poi);

    //getters for City
    string getName();
    int getNoOfCitizens();
    string getLocation();
    string getPoi();

    //service print
    void print();

};

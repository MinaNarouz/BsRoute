#include <iostream>
#include <string.h>

using namespace std;

class Person
{
protected:
    int id;
    string name, password;

public:
    Person();
    Person(int id, string name, string password);
    ~Person();
    void setName(string name);
    void setPassword(string password);
    void setID(int ID);
    string getName();
    string getPassword();
    int getID();
};
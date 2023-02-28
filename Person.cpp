#include "Person.h"

Person::Person()
{
    int id = 0;
    string name = " ";
    string password = " ";
}
Person::Person(int id, string name, string password)
{
    setID(id);
    setName(name);
    setPassword(password);
}

Person::~Person(){};

void Person::setName(string name)
{
    this->name = name;
}
void Person::setID(int ID)
{
    id = ID;
}
void Person::setPassword(string password)
{
    this->password = password;
}
string Person::getName()
{
    return name;
}
string Person::getPassword()
{
    return password;
}
int Person::getID()
{
    return id;
}
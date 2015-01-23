#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

string Person::getName()
{
    return this->name;
}

string Person::getID()
{
    return this->id;
}

string Person::getPremissions()
{
    return this->premissions;
}

void Person::setPremissions(string premission)
{
    this->premissions = premission;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setID( string ID)
{
    this->id = ID;
}


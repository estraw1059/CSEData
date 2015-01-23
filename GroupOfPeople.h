#include <iostream>
#include "Person.h"
#include <vector>
#include <string>
#ifndef GROUPOFPEOPLE_H
#define GROUPOFPEOPLE_H

class GroupOfPeople
{
    public:
        void addPerson(Person);
        void assignNameToID(std::string, std::string);
        void printPeople();
        
        
    private:
        std::vector<Person> group;
        Person* findByID(std::string);
};

#endif

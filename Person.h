#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
    public:
        std::string getName();
        std::string getID();
        std::string getPremissions();
        void setName(std::string);
        void setPremissions(std::string);
        void setID(std::string);
    private:
        std::string id;
        std::string name;
        std::string premissions;
 
};
 
#endif

#ifndef FILEMANGER_H
#define FILEMANGER_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "GroupOfPeople.h"

class FileManger
{
    public:
        FileManger(std::string, std::string);
        void setNumberOfID();
        void setNumberOfPeople();
        void getID();
        void getNames();
    private:
        GroupOfPeople FinalList;
        std::ifstream readFile;
        std::ofstream writeFile;

};
#endif

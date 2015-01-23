#ifndef TOBINARY_H
#define TOBINARY_H
#include <iostream>
#include <string>

class ToBinary
{
    public:
        std::string convertToBinary(int);
        bool checkNumber(int);
    private:
        std::string reverse(std::string);
        int TOPSIDE = 255;
        int BOTTOMSIDE = 0;
};

#endif

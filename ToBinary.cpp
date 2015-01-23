//This will go to Binary
#include <iostream>
#include "ToBinary.h"
#include <string>
using namespace std;

string ToBinary::reverse (string s) {

    string result=""; //create a new string and set it to the empty string

    for (int i=0; i<s.length( ) ; i++) //s.length( ) returns the length of a string
    { 

    result = s[ i ] + result ; //take the newest character and add it before what we have already
    }

    return result;
} 



string ToBinary::convertToBinary(int x)
{
    string s;
    while (x != 0)
    {
        if (x%2 == 0)
        {
            s = s + "0";
        }
        else
        {
            s= s + "1";
        }
        x = x/2;
    }
    s = reverse(s);
    return s;
} 

bool ToBinary::checkNumber(int x)
{
    if (x <= this->TOPSIDE && x >= this->BOTTOMSIDE)
    {
        return true;
    }
    else
    {
        return false;
    }
}   


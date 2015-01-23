#include "FileManger.h"

using namespace std;

FileManger::FileManger(string inputName, string outputName)
{
    this->readFile.open(inputName);
    if (!(readFile.is_open()))
    {
        cout << "Error " << inputName <<  " does not exsist" << endl;
        string newFileName;
        while (true)
        {
            cout << "Enter new Input File:" << endl;
            cin >> newFileName;
            this->readFile.open(newFileName);
            if (readFile.is_open())
            {
                break;
            }
        }
    }
    this->writeFile.open(outputName);
}


    

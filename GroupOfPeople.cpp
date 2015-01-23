#include "GroupOfPeople.h"

using namespace std;

void GroupOfPeople::addPerson(Person toBeAdded)
{
    this->group.push_back(toBeAdded);
}

Person* GroupOfPeople::findByID(string IDToFind)
{
    int x = 0;
    for (x = 0; x < this->group.size(); x++)
    {
        Person current = this->group[x];
        if (current.getID() == IDToFind)
        {
            return &this->group[x];
        }
    }
}

void GroupOfPeople::assignNameToID(string ID, string name)
{
    Person *current;
    current = findByID(ID);
    current->setName(name);
}

void GroupOfPeople::printPeople()
{
    for (int x = 0; x < this->group.size(); x++)
    {
        Person current = this->group[x];
        cout << current.getName() << " ID is " << current.getID() << endl;
    }
}
        
    
            
    

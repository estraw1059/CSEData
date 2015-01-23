#include "ToBinary.h"
#include "Person.h"
#include "GroupOfPeople.h"
#include "FileManger.h"

using namespace std;

int main(int argc, char *argv[])
{
    /*int test = -1;
    string result;
    ToBinary current;
    cout << current.checkNumber(test)<< endl;
    //result = current.convertToBinary(test);
    
    /*Person Eric;
    Eric.setName("Eric Straw");
    Eric.setID("40448191");
    Eric.setPremissions("127");
    GroupOfPeople yeah;
    yeah.addPerson(Eric);
    yeah.assignNameToID("40448191", "Sean Straw");
    yeah.printPeople();
    cout << result;*/

    FileManger program(argv[1], argv[2]);
    
    
    
}

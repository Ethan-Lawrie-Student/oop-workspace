#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);



int main() {
    
    PersonList thePersonList;
    thePersonList = createPersonList(6);
    
    std::cout << thePersonList.numPeople << std::endl;

    for (int i = 0; i < 6; i++){
        std::cout << (thePersonList.people + i)->age << ", " << (thePersonList.people + i)->name << std::endl; 
    }

    return 0;
}
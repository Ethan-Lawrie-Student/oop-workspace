#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
    
    PersonList thePersonList;
    thePersonList = createPersonList(6);
    
    std::cout << thePersonList.numPeople << std::endl;

    for (int i = 0; i < 6; i++){
        std::cout << (thePersonList.people + i)->age << ", " << (thePersonList.people + i)->name << std::endl; 
    }

    std::cout << "\n";

    PersonList copiedList;
    copiedList = shallowCopyPersonList(thePersonList);
    
    std::cout << copiedList.numPeople << std::endl;

    for (int i = 0; i < 6; i++){
        std::cout << (copiedList.people + i)->age << ", " << (copiedList.people + i)->name << std::endl; 
    }

    return 0;
}
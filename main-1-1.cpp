#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    Person *people = createPersonArray(5);

    for (int i = 0; i < 5; i++){
        std::cout << (people + i)->age << ", " << (people + i)->name << std::endl; 
    }
    
    delete people;

    return 0;
}
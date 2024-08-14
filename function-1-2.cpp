#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    Person *personArray = new Person[n];
    for(int i = 0; i < n; i++) {
        personArray[i].name = "Jane Doe";
        personArray[i].age = 1;
    }

    PersonList people;
    people.numPeople = n;
    people.people = personArray;

    return people;
}

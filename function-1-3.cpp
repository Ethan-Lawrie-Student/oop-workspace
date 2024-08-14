#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newList;
    int length = pl.numPeople;

    newList.numPeople = length;
    
    Person *personArray = new Person[length];
    for(int i = 0; i < length; i++) {
        personArray[i].name = pl.people[i].name;
        personArray[i].age = pl.people[i].age;
    }
    
    newList.people = personArray;

    return newList;
}

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
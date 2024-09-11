#include "Course.h"
#include "Person.h"

Course::Course(/* args */)
{
}

Course::Course(int id, std::string name)
{
    this->id = id;
    this->name = name;
    people = new  Person * [100];
    curPeople = 0;
}

Course::~Course()
{
}

void Course::addPerson(Person *person)
{
    people[curPeople] = person;

    curPeople++;
    
}

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
    /* data */
    std::string name;
public:
    Person(/* args */);
    Person(std::string name);
    ~Person();
};





#endif
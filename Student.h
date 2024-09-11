#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person
{
private:
    /* data */
    int id;
public:
    Student(/* args */);
    Student(int id, std::string name): Person(name), id(id){};
    ~Student();
};





#endif
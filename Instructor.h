#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string> 
#include "Person.h" 

class Instructor : public Person
{
private:
    /* data */
    int id;
public:
    Instructor(/* args */);
    Instructor( std::string name): Person(name){};
    ~Instructor();
};



#endif
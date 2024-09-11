#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Person.h"

class Course
{
private:
    std::string name;
    int id;
    Person ** people;
    int curPeople;
public:
    Course(/* args */);
    Course(int id, std::string name);
    ~Course();
    std::string get_name() {return name;};
    void addPerson(Person * person);
    int get_id() {return id;};
};



#endif
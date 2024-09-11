#include "University.h"

#include <iostream>

University::University(/* args */)
{
}

University::University(std::string name, std::string location, int maxCourses)
{
    this->name = name;
    this->location = location;
    this->maxCourses = maxCourses;
    courseAmount = 0;
    courses = new Course[maxCourses];
}

void University::addCourse(int id, std::string name)
{
    if(courseAmount < maxCourses) {
        courses[courseAmount] = Course(id, name);
        courseAmount = courseAmount + 1;
    }
    
}

University::~University()
{
    delete[] courses;
    
}

void University::PrintCourses()
{
    for (int i = 0; i < courseAmount; i++) {
        std::cout << courses[i].get_name() << std::endl;
    }
    
}
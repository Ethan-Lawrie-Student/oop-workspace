#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include "Course.h"

class University
{
private:
    std::string name;
    std::string location;

    Course * courses; 
    int courseAmount; 
    int maxCourses;
public:
    University(/* args */);

    University(std::string name, std::string location, int maxCourses);

    void addCourse(int id, std::string name);

    ~University();

    Course * getCourse(int id){
        for (int i = 0; i < courseAmount; i++) {
            if(courses[i].get_id() == id){
                return &courses[i];
            }
        }
        
        // return courses[0];
    }

    void PrintCourses();
};





#endif
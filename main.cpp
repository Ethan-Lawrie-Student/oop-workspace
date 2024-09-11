#include "University.h"
#include "Course.h"

#include <string>
#include <iostream>

int main(){
    University theUni = University("Adelaide University", "North Terrace", 5);

    theUni.addCourse(10, "CS");
    theUni.addCourse(102, "Engineering");

    theUni.PrintCourses();

    

    return 0;
}
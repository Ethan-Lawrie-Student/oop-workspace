#include "University.h"
#include "Course.h"

#include <string>
#include <iostream>

#include "Student.h"


int main(){
    University theUni = University("Adelaide University", "North Terrace", 5);

    theUni.addCourse(10, "CS");
    theUni.addCourse(102, "Engineering");

    theUni.PrintCourses();

    Student student1 = Student(10, "Ethan");

    theUni.getCourse(10)->addPerson(&student1);

    

    return 0;
}
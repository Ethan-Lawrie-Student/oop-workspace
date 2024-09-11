#include <iostream>
#include <string>

#include "Course.h"
#include "Student.h"
#include "University.h"

int main() {
  University theUni = University("Adelaide University", "North Terrace", 5);

  theUni.addCourse(10, "CS");
  theUni.addCourse(102, "Business Lifecycles");

  theUni.PrintCourses();

  Student student1 = Student(10, "Ethan");

  theUni.getCourse(10)->addPerson(&student1);

  theUni.uniGradebook.addGrade(10, 106, "Workshop 8", 95);

  theUni.uniGradebook.addGrade(10, 102, "Mikes Bikes Presentation", 80);

  theUni.uniGradebook.printGrades(10);

  return 0;
}
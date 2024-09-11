#include "Grade.h"

#include <iostream>
#include <string>

Grade::Grade(/* args */) {}

Grade::Grade(int stud_id, int course_id, std::string assignment, int value) {
  student_id = stud_id;
  this->course_id = course_id;
  this->assignment = assignment;
  this->value = value;
}

Grade::~Grade() {}

void Grade::printGrade() {
  std::cout << "Course: " << course_id << ", Assignment: " << assignment
            << ", Grade: " << value << "% " << std::endl;
}

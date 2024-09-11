#include "Gradebook.h"

#include <iostream>

#include "Grade.h"

Gradebook::Gradebook(/* args */) {
  grades = new Grade[100];
  curGradeAmount = 0;
}

Gradebook::~Gradebook() {}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment,
                         int value) {
  if (curGradeAmount < 100) {
    grades[curGradeAmount] = Grade(stud_id, course_id, assignment, value);
    curGradeAmount = curGradeAmount + 1;
  }
}

void Gradebook::printGrades(int stud_id) {
  for (int i = 0; i < curGradeAmount; i++) {
    if (grades[i].getStudID() == stud_id) {
      grades[i].printGrade();
    }
  }
}

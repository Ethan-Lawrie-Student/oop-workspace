#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
 private:
  std::string assignment;
  int value;
  int course_id;
  int student_id;

 public:
  Grade(/* args */);
  Grade(int stud_id, int course_id, std::string assingnment, int value);
  ~Grade();
  int getStudID() { return student_id; }
  void printGrade();
};

#endif
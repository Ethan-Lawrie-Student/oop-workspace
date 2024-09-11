#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

#include "Course.h"
#include "Gradebook.h"

class University {
 private:
  std::string name;
  std::string location;

  Course* courses;
  int courseAmount;
  int maxCourses;

 public:
  Gradebook uniGradebook;
  University(/* args */);

  University(std::string name, std::string location, int maxCourses);

  void addCourse(int id, std::string name);

  ~University();

  Course* getCourse(int id) {
    int hasReturned = -1;
    for (int i = 0; i < courseAmount; i++) {
      if (courses[i].get_id() == id) {
        hasReturned = i;
      }
    }

    if (hasReturned == -1) {
      return &courses[0];
    } else {
      return &courses[hasReturned];
    }
  }

  Gradebook get_gradebook() { return uniGradebook; }

  void PrintCourses();
};

#endif
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  // Constructor and Destructor
  Student(const char* n, int g);
  ~Student();

  // Print Student name & grade
  void getDisplay();
 private:
  const char* name = "";
  int grade = 0;
};

#endif

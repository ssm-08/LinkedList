#include "Student.h"

Student::Student(const char* n, int g) {
  name = n;
  grade = g;
}

Student::~Student() {
  name = "";
  grade = 0;
}

void Student::getDisplay() {
  cout << "\n";
  cout << name;
  cout << ", ";
  cout << grade;
}

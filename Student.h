#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  Student(const char* n, int g);
  ~Student();
 private:
  const char* name = "";
  int grade = 0;
};

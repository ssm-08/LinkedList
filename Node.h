#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

class Node {
 public:
  Node(Student* s);
  ~Node();
  void setNext(Node* n);
  Node* getNext();

  Student* getStudent();
 private:
  Student* student = NULL;
  Node* next = NULL;
};

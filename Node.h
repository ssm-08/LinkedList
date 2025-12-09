#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

class Node {
 public:
  Node(*Student);
  ~Node();
  void setNext(Node*);
  Node* getNext();

  Student* getStudent();
 private:
  Student* student = NULL;
  Node* next = NULL;
};

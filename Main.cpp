#include <iostream>
#include <cstring>

#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student* s);
void print(Node* n);

int main() {

  Student* one = new Student("Bob", 9);
  Student* two = new Student("Billy", 10);

  Node* head = new Node(one);

  cout << "\nHead's data";
  head->getStudent()->getDisplay();

  Node* next = new Node(two);

  head->setNext(next);

  cout << "\nHead's next node's data";
  head->getNext()->getStudent()->getDisplay();

}

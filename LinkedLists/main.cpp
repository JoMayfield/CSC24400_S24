// This is a program to show case the linked list data structure
// Now we must include any header files that are used
#include "Node.hpp"
#include "LList.hpp"
// The usual includes
#include <iostream>
#include <string>

using namespace std;

int main() {
  // TESTING NODE IMPLEMENTATION
  Node testNode("Hello");
  
  // Not ideal: Printing node without overloaded <<
  cout << "(1) Node is: ";
  cout << *(testNode.ndata());
  cout << endl;
  
  // Better: Printing node with our print method
  cout << "(2) Node is: ";
  testNode.print(cout);
  cout << endl;
  
  // Best: Printing node using overloaded <<
  cout << "(3) Node is: ";
  cout << testNode;
  cout << endl;
  
  // TESTING LINKED LIST IMPLEMENTATION
  LList myLinkedList;
  myLinkedList.addToFront("skylar5");
  
  myLinkedList.print(cout);

  return 0;
}


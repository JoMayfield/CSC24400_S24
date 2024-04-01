// This is a program to show case the linked list data structure
/*
    If you downloaded all the files in LinkedList/ from GitHub,
    you may compile with the following line:
    g++ main.cpp Node.cpp LList.cpp
    OR...
    g++ *.cpp
    which will compile every .cpp file in the current directory
  */

// We must include any header files that are used
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
  cout << endl << endl;
  
  // TESTING LINKED LIST IMPLEMENTATION
  LList myLinkedList;
  myLinkedList.addToFront("skylar5");
  myLinkedList.addToFront("World!");
  myLinkedList.addToFront("Hello");
  myLinkedList.addToEnd("Goodbye!");
  
  myLinkedList.print(cout);
  cout << endl;
  
  myLinkedList.removeVal("skylar5"); // Should remove skylar5
  myLinkedList.removeVal("skylar4"); // Should do nothing
  
  myLinkedList.print(cout);

  return 0;
}


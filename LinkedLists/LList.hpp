#ifndef _LLIST_HPP
#define _LLIST_HPP

// This is the header file for our linked list class
#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

class LList {
  private:
    Node* _head;
    
  public:
    // Default constructor (no parameters)
    LList() : _head(nullptr) {}
    
    // Accessor (get)
    Node* head() const {return _head;}
    // Modifier (set)
    Node* & head() {return _head;}
    
    // Methods to add to LL
    void addToFront(const string &newVal);
    void addToEnd(const string &newVal);
    
    // Method to remove from LL
    void removeVal(const string &valToRemove);
    
    Node* findNode(const string &valToFind) const;
    
    ostream& print(ostream &os) const;
};

ostream& operator<<(ostream &os, const LList &l);

#endif

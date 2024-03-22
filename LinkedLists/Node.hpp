// Add defines at beginning and end of file
#ifndef _NODE_HPP
#define _NODE_HPP

#include <iostream>
#include <string>
using namespace std;

class Node {
  private:
    // The data for a node in this example is one string
    string *_data;
    // We need a pointer to the next node
    Node *_next;
    
  public:
    // Default + parameterized constructors
    Node() : _data(nullptr), _next(nullptr) {}
    Node(const string &val) : _data(new string(val)), _next(nullptr) {}
    
    // Accessors (get)
    string* ndata() const {return _data;}
    Node* next() const {return _next;}
    
    // Modifiers (set)
    string* & ndata() {return _data;}
    Node* & next() {return _next;}
    
    ostream& print(ostream &os) const;
};

ostream& operator<<(ostream &os, const Node &n);

#endif

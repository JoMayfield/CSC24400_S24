#include "LList.hpp"
#include "Node.hpp"
using namespace std;

// Adds newVal to the front of the LL
void LList::addToFront(const string &newVal)
{
  Node* newNode = new Node(newVal);
  newNode->next() = _head;
  _head = newNode;
  return;
}

// IN PROGRESS...
void LList::removeVal(const string &valToRemove)
{
  return;
}

// Finds a node with the value valToFind
// Returns the node if found, nullptr otherwise
Node* LList::findNode(const string &valToFind) const
{
  Node* curr = _head;
  while(curr != nullptr) {
    if(*(curr->ndata()) == valToFind)
      return curr;
    curr = curr->next();
  }
  return nullptr;
}

// Used to output a Linked List
ostream& LList::print(ostream &os) const
{
  Node* curr = _head;
  while(curr != nullptr) {
    os << *curr << endl;
    curr = curr->next();
  }
  return os;
}

ostream& operator<<(ostream &os, const LList &l)
{
  return l.print(os);
}

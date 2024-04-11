#ifndef _BST_HPP_
#define _BST_HPP_

#include "BSTNode.hpp"
#include <iostream>

class BST
{
  private:
        BST_Node* _root;
    
  public:
        BST(): _root(nullptr) {} //Default constructor
        
        void insert(const int newVal);
        
        BST_Node* find(int valToFind) const;
        
        void remove(const int valToRemove);
        
        void print() const;
};

#endif

#ifndef _BST_NODE_HPP_
#define _BST_NODE_HPP_

#include <iostream>
using namespace std;

class BST_Node
{
  private:
    int _data;
    BST_Node* _left;
    BST_Node* _right;
    
  public:
    BST_Node(): _data(0), _left(nullptr), _right(nullptr) {}
    
    BST_Node(int value): _data(value), _left(nullptr), _right(nullptr) {}

    int data() const {return _data;} // Get (accessor)
    int& data() {return _data;} // Set (modifier)
    
    BST_Node* left() const {return _left;}
    BST_Node* &left() {return _left;}
    
    BST_Node* right() const {return _right;}
    BST_Node* &right() {return _right;}
};

#endif

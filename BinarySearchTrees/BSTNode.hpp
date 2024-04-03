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

};

#endif

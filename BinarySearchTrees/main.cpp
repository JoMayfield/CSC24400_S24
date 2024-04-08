#include "BSTNode.hpp"
#include <iostream>
using namespace std;


int main()
{
  // Testing Node implementation
  BST_Node myNode = BST_Node(2);
  cout << "Data: " << myNode.data() << endl;
  cout << "Left child: " << myNode.left() << endl;
  cout << "Right child: " << myNode.right() << endl;

  BST_Node myNode2 = BST_Node(5);
  myNode.right() = &myNode2;
  cout << endl << "Right child: " << myNode.right()->data() << endl;

  return 0;
}

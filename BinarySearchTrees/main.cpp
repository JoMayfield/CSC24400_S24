#include "BSTNode.hpp"
#include "BST.hpp"
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
  
  
  // Testing Tree implementation
  BST myTree;
  myTree.insert(5);
  myTree.insert(18);
  myTree.insert(38);
  myTree.insert(2);
  myTree.insert(150000);
  myTree.insert(1);
  myTree.insert(3);
  // Try drawing out this tree!
  
  myTree.print();
  myTree.remove(18); // Try removing different elements
  myTree.print();

  return 0;
}

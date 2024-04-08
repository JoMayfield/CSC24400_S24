// Methods for the BST
// We will see the concept of "helper" functions
#include "BST.hpp"
#include "BST_Node.hpp"

// Inserts a node with value valToAdd into a BST
// Ultimately returns root of entire tree
// NOTE: This is a recursive method!
BST_Node* insertHelper(BST_Node *subTreeRoot, int valToAdd)
{
  // If spot is empty, we can put node here!
  if(subTreeRoot == nullptr)
  {
    BST_Node* newSubTree = new BST_Node(valToAdd);
    return newSubTree;
  }
  
  if(valToAdd < subTreeRoot->data())
  {
    // Go left
    BST_Node* updatedSubTree = insertHelper(subTreeRoot->left(), valToAdd);
    subTreeRoot->left() = updatedSubTree;
    return subTreeRoot;
  }
  else if(valToAdd > subTreeRoot->data())
  {
    // Go right
    BST_Node* updatedSubTree = insertHelper(subTreeRoot->right(), valToAdd);
    subTreeRoot->right() = updatedSubTree;
    return subTreeRoot;
  }
  else
  {
    return subTreeRoot;
  }
}

void BST::insert(const int newVal)
{
  _root = insertHelper(_root, newVal);
  return;
}

// Finds a node (if it exists) in a BST with value valToFind
// Returns node if found, nullptr otherwise
BST_Node* findHelper(BST_Node* subTreeRoot, int valToFind)
{
  // Case: Reached where node should have been but isn't --> DIDN'T FIND IT
  if(subTreeRoot == nullptr)
    return nullptr;
  // Case: Value is SMALLER than current node's --> GO LEFT
  if(valToFind < subTreeRoot->data())
    return findHelper(subTreeRoot->left(), valToFind);
  // Case: Value is LARGER than current node's --> GO RIGHT
  else if(valToFind > subTreeRoot->data())
    return findHelper(subTreeRoot->right(), valToFind);
  // Case: Value is EQUAL to current node's --> FOUND IT
  else if(valToFind == subTreeRoot->data())
    return subTreeRoot;
}

BST_Node* BST::find(int valToFind) const
{
  return findHelper(_root, valToFind);
}

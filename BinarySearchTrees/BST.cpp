// Methods for the BST
// We will see the concept of "helper" functions
#include "BST.hpp"
#include "BSTNode.hpp"

/////////////////////////////////////////////////////////////// INSERT
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

// insert() class method calls insertHelper() standalone function
void BST::insert(const int newVal)
{
  _root = insertHelper(_root, newVal);
  return;
}


/////////////////////////////////////////////////////////////// FIND
// Finds a node (if it exists) in a BST with value valToFind
// Returns node if found, nullptr otherwise
// NOTE: This is a recursive method!
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
  else //if(valToFind == subTreeRoot->data())
        return subTreeRoot;
}

// find() class method calls findHelper() standalone function
BST_Node* BST::find(int valToFind) const
{
  return findHelper(_root, valToFind);
}


/////////////////////////////////////////////////////////////// IN ORDER PRINT
// Prints the contents of the tree in sorted order
// Also acts as an in-order traversal example
// NOTE: This is a recursive method!
void inOrderPrint(BST_Node* subTreeRoot)
{
  // Traverse left subtree
  if(subTreeRoot->left() != nullptr)
        inOrderPrint(subTreeRoot->left());
  
  // Visit current node
  cout << " " << subTreeRoot->data() << " ";
  
  // Traverse right subtree
  if(subTreeRoot->right() != nullptr)
        inOrderPrint(subTreeRoot->right());
    
  return;
}

// print() class method calls inOrderPrint() standalone function
void BST::print() const
{
  inOrderPrint(_root);
  cout << endl;
  return;
}


/////////////////////////////////////////////////////////////// REMOVE
// Removes a node with value valToRemove from a BST
// Ultimately returns root of entire tree
// NOTE: This is a recursive method!
BST_Node* removeHelper(BST_Node* subTreeRoot, int valToRemove)
{
  // LOOK LEFT
  if(valToRemove < subTreeRoot->data())
  {
        // Update left subtree when working our way back up the recursive call stack
        subTreeRoot->left() = removeHelper(subTreeRoot->left(), valToRemove);
        // Return root of subtree
        return subTreeRoot;
  }
  // LOOK RIGHT
  else if(valToRemove > subTreeRoot->data())
  {
        // Update right subtree when working our way back up the recursive call stack
        subTreeRoot->right() = removeHelper(subTreeRoot->right(), valToRemove);
        // Return root of subtree
        return subTreeRoot;
  }
  // FOUND THE NODE TO DELETE
  else // if valToRemove == curr node
  {
        // CASE: Node has no children
        if(subTreeRoot->left() == nullptr && subTreeRoot->right() == nullptr)
              return nullptr;
        // CASE: Only has a left child
        else if(subTreeRoot->right() == nullptr)
              // Replace deleted node with its left subtree
              return subTreeRoot->left();
        // CASE: Only has a right child
        else if(subTreeRoot->left() == nullptr)
              // Replace deleted node with its right subtree
              return subTreeRoot->right();
        // CASE: Has two children (left AND right)
        else
        {
              // Need to keep track of parent so we can update the pointer 
              //    to one of its children later
              // Note: This would not be necessary if we implemented our
              //    BST_Node with a parent pointer
              BST_Node* parentOfRN = subTreeRoot;
              
              // Replacement node will end up being the (soon to be) deleted
              //    node's successor
              BST_Node* replacementNode = parentOfRN->right();
              
              // If node's successor is its right child
              //     (which happens if there is no left subtree to explore)
              if(replacementNode->left() == nullptr)
                    parentOfRN->right() = nullptr;
              // Else, look for leftmost node in right sub-tree
              //    (That's where the successor will be)
              else
              { 
                    // Iterate over left subtree until we cannot go any further left
                    while(replacementNode->left() != nullptr)
                    {
                          parentOfRN = replacementNode;
                          replacementNode = replacementNode->left();
                    }
                    parentOfRN->left() = nullptr;
              }
              // Replace (soon to be) deleted node's value with
              //    the value of its successor
              subTreeRoot->data() = replacementNode->data();
              // Now that the deleted node's data is overwritten,
              //    return the updated subtree
              return subTreeRoot;
        }
  }
}

// remove() class method calls removeHelper() standalone function
void BST::remove(const int valToRemove)
{
  _root = removeHelper(_root, valToRemove);
  return;
}

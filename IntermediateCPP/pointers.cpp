// This program introduces pointers
#include <iostream>
using namespace std;

int main() {
  int val = 4; // val is a int variable
  int* intPtr; // intPtr is a pointer to an int variable
  
  // Set intPtr to the ADDRESS-OF val
  intPtr = &val;

  cout << val << endl; // Outputs 4
  cout << *intPtr << endl; // Outputs 4
  
  // Assign 30 to the int variable pointed to by val 
  *intPtr = 30; 
  
  cout << val << endl; // Outputs 30
  cout << *intPtr << endl; // Outputs 30
  
  return 0;
}

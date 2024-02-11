// This program introduces the keyword "new"
#include <iostream>
using namespace std;

int main() {
  // Create a pointer to an int that we haven't declared yet
  int* intPtr = new int;
  
  // Assign 12 to the int that intPtr points to
  *intPtr = 12;
  
  cout << *intPtr << endl; // Outputs 12
  cout << intPtr << endl << endl; // Outputs a memory address
  
  // Maybe we want to increment to 13
  //    But this would increment the address,
  //    NOT the int variable itself
  intPtr++; // Comment this out, and uncomment the next line
  //(*intPtr)++; // SOLUTION: De-reference before incrementing!
  
  cout << *intPtr << endl; // Outputs non-sense (maybe 0, maybe not)
  cout << intPtr << endl; // Outputs the next memory address

  return 0;
}

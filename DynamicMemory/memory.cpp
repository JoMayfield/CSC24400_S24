// This program shows what happens when we try to access
//    memory that is not ours.
#include <iostream>
using namespace std;

int main() {
  int myArr[4];
  
  // Is this allowed? It shouldn't be!
  // No compiler error.
  // It might seg fault, it might not.
  // It might let you do this, who knows?
  myArr[500] = 10;
  
  cout << myArr[500] << endl;

  return 0;
}

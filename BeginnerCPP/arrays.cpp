#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 6, 7, 8};
  
    // Prints out the length of the array
    cout << sizeof(arr) / sizeof(int) << endl;
  
    // arr.length is not defined
    // arr.length() is not defined
    // Arrays are NOT objects in C++
    //   so they will not use the dot notation
    //   we are used to seeing in Java

  return 0;
}

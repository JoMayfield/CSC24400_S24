// This program shows a dynamically allocated array of arrays (a matrix).
// Specifically, it shows how to use "new" and "delete" with 
//    multi-dimensional arrays.
#include <iostream>
using namespace std;

int main() {
  // grid is a 3-element array, where each element is itself an int array
  int ** grid = new int*[3];
  
  for(int i = 0; i < 3; i++)
  {
    // Allocate a 4-element integer array for each of grid[0], [1], and [2]
    grid[i] = new int[4];
  }
 
 // Accompanying "delete" to mirror the "new"
 for(int i = 0; i < 3; i++)
  {
    // Delete the array stored at each of grid[0], [1], and [2]
    delete[] grid[i];
  }
  // Delete the final outermost grid object
  delete[] grid;
  
  return 0;
}

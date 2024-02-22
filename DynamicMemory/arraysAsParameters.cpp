// This program shows how to pass 1D and 2D arrays as function
//    parameters.
#include <iostream>
#include <fstream>
using namespace std;

// Function taking a dynamically allocated multi-dimensional
//    array as a parameter
// The reason for doing this is that if you pass a multi-dimensional
//    array as a parameter, you must know all of the dimensions past
//    the first dimension, which will not work for dynamically-allocated
//    arrays.
void printGrid(int** grid, int num_rows, int num_cols) {
    for(int i = 0; i < num_rows; i++)
    {
          for(int j = 0; j < num_cols; j++)
          {
                cout << grid[i][j] << "     ";
          }
          cout << endl;
    }
    return;
}

int main(int argc, char* argv[]) {
  string fileName = argv[1]; // Get file name from command line
  //cin >> fileName; // No longer need to cin file name from keyboard
  ifstream fin(fileName);
  
  int num_rows = 0;
  int num_cols = 0;
  
  fin >> num_rows;
  fin >> num_cols;
  
  // Dynamically create 2D array and allocate space for it 
  int **grid = new int*[num_rows];
  for(int i = 0; i < num_rows; i++)
  {
      grid[i] = new int[num_cols];
  }
  
  // Read in data for 2D array
  for(int i = 0; i < num_rows; i++)
  {
      for(int j = 0; j < num_cols; j++)
      {
          fin >> grid[i][j];
      }
  }
  
  printGrid(num_rows, num_cols, grid);

  return 0;
}

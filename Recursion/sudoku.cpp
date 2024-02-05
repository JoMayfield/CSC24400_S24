// A sudoku solver utilizing recursive backtracking
#include <iostream>
#include <fstream>
using namespace std;

// Prints the sudoku grid
void printGrid(int grid[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(grid[i][j] != 0)
                cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

// Checks if placing num in grid[row][col] is a valid move
//    with the current state of grid
bool isValid(int grid[3][3], int row, int col, int num) {
    // Check for same value in same row
    for(int j = 0; j < 3; j++)
        if(grid[row][j] == num)
            return false;
    // Checks for same value in same column
    for(int i = 0; i < 3; i++)
        if(grid[i][col] == num)
            return false;
        
    return true;
}

// Recursive function
bool sudokuSolver(int grid[3][3], int row, int col) {
    // If we have exhausted the entire grid
    if(row == 2 && col == 3)
        return true;
    // If our next cell is in the next row...
    if(col == 3) {
        // Increment the row and reset to first column
        row++;
        col = 0;
    }
    
    // If current cell is already filled in...
    if(grid[row][col] > 0)
        // Skip to next cell
        return sudokuSolver(grid, row, col+1);
    
    // Try placing a 1, 2, then 3 in current cell
    for(int num = 1; num <= 3; num++) {
        // Check if move is valid
        if(isValid(grid, row, col, num)) {
            // If so, try placing num in current cell
            grid[row][col] = num;
            
            // Recursive call on next cell
            if(sudokuSolver(grid, row, col+1))
                return true;
        }
        // Reset spot to be 'empty' if num didn't work out
        grid[row][col] = 0;
    }
    return false;
}

int main() {
    int grid[3][3];
    
    // Create input file stream object and open input file
    ifstream fin("sudokuInput.txt");
    // Read in grid from file
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            fin >> grid[i][j];
        }
    }
    fin.close();
    
    // Call to sudoku solver
    if(sudokuSolver(grid, 0, 0)) // Start at grid[0][0] (first cell)
        printGrid(grid);
    else {
        cout << "No solution" << endl;
        printGrid(grid);
    }
    
    return 0;
}

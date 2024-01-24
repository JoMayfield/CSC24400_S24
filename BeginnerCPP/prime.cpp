#include <iostream>
#include <fstream> // Allows us to perform file I/O
using namespace std;

int main() {
    int userNum = -1;
    
    // Create input file stream object
    ifstream fin;
    // Open the input file
    fin.open("input.txt");
    
    // Loop until user enters a non-negative number
    while(userNum < 0) {
        // Get user input from file
        fin >> userNum;
    }
    
    // Close the input file
    fin.close();
    
    // Assume a number is prime until we find otherwise
    bool isPrime = true;
    
    // Check all possible factors from 2 to userNum-1
    for(int i = 2; i < userNum; i++) {
        if(userNum % i == 0)
            isPrime = false;
    }
    
    // Edge-case: 1 is not a prime number
    if(userNum == 1)
        isPrime = false;
    
    // Create ouput file stream object
    ofstream fout;
    // Open the output file
    fout.open("output.txt");
    
    // Output the result to the output file
    if(isPrime)
        fout << userNum << " is prime!" << endl;
    else
        fout << userNum << " is NOT prime!" << endl;

    // Close the output file
    fout.close();

    return 0;
}

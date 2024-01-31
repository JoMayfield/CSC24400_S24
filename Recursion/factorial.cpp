// This is an introductory example of recursion, and we compare
//    it with an iterative version of the same problem
#include <iostream>
using namespace std;

// These are functions for computing the factorial of a number

// ITERATIVE - involves looping
int factorialIterative(int n) {
    int a = 1;
    // n! = 1 * 2 * 3 * ... * (n-1) * n
    for(int num = 1; num <= n; num++)
        a = a * num;
    return a;
}

// RECURSIVE - function calls itself
int factorialRecursive(int n) {
    // n! = n * (n-1)!
    if(n == 1)
        return 1;
    return n * factorialRecursive(n-1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
  
    int answer = factorialRecursive(n); // Try calling factorialIterative(n), too
    cout << "The factorial of " << n << " is " << answer << endl;

    return 0;
}

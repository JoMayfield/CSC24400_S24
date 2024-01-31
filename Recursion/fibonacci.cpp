// Another recursion example!
#include <iostream>
using namespace std;

// Computes the n-th Fibonacci number recursively
// f(n) = f(n-1) + f(n-2) for n > 1
// f(1) = 1, f(2) = 1
int fib(int n) {
    // Base Case (n is 1 or 2)
    if(n <= 2)
        return 1;
    // Recursive Case (all other values of n)
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
  
    int answer = fib(n);
    cout << "The n-th Fibonacci number for n=" << n
        << " is " << answer << endl;

    return 0;
}

// This program shows a dynamically-allocated array
#include <iostream>
using namespace std;

int main() {
    int n;
    int* arrPtr;
  
    cout << "Enter n: ";
    cin >> n;
  
    // Declare array to be of user-defined size, n
    arrPtr = new int[n];
  
    // Fill array with user-entered values
    for(int i = 0; i < n; i++)
    {
        // One way to access is arrPtr[i]
        cin >> arrPtr[i];
    }
    
    // Print array
    for(int i = 0; i < n; i++)
    {
        // Equivalent way to access is *(arrPtr+i)
        cout << *(arrPtr+i) << " ";
    }
    cout << endl;
    
    delete[] arrPtr;

    return 0;
}

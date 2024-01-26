#include <iostream>
using namespace std;

// Create global variable
int myVar;

void myFnct() {
    //int myVar = 1000; // Creates variable local to myFnct()
    myVar = 1000; // myVar refers to global variable
    cout << myVar << endl;
    return;
}

int main() {
    //myVar = 7; // myVar refers to global variable
    int myVar = 7; // Creates variable local to main()
    
    cout << myVar << endl;
    myFnct();
    cout << myVar << endl;

    return 0;
}

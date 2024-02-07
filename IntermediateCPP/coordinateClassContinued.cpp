// This program illustrates operator overloading,
//    passing by const reference, const methods,
//    friend functions, and returning by reference.
#include <iostream>
using namespace std;

class Coordinate {
    private:
        int x;
        int y;
        
    public:
        Coordinate() {}
        Coordinate(int a, int b) {x = a; y = b;}
        
        Coordinate operator+(const Coordinate& p2) const;
        
        friend void printCoordStandaloneFunction(const Coordinate& p);
        
        // Return by reference example
        int& x_val() {return x;} // Returns a reference to int x of calling obj
};

// Operator overloading - can define what it means to add two coordinates
// We can overload any operator for any type
// More considerations:
//    Should p2 be passed by reference? Yes!
//    Should p2 be const? Yes!
//    Should the method be const (not change the calling obj)? Yes!
Coordinate Coordinate::operator+(const Coordinate& p2) const {
    Coordinate sum;
    sum.x = x + p2.x;
    sum.y = y + p2.y;
    return sum;
}

// This print function no longer works once x and y are private!
//    Solution: Make this fnct a FRIEND of the class!
// More considerations:
//    Should p be passed by reference? Yes!
//    Should p be const? Yes! We don't change p in the function.
//    Should this fnct be a method of the class (vs a standalone fnct)? Yes!
void printCoordStandaloneFunction(const Coordinate& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
    return;
}

int main() {
    Coordinate a = Coordinate(2, 3);    
    Coordinate b = Coordinate(3, 1);
    
    Coordinate c = Coordinate();
    //c = a.operator+(b); // Equivalent to c = a+b
    c = a + b;
    printCoordStandaloneFunction(c);
    
    // How can we access private member variables?
    //cout << c.x << endl; // No access to private!
    cout << "c's x is: " << c.x_val() << endl;
    
    // How can we set private member variables?
    //c.x = 800; // No access to private!
    c.x_val() = 800; // Only works when x_val() returns a ref!
    
    cout << "c's x is: " << c.x_val() << endl;

    return 0;
}

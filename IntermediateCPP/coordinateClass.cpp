#include <iostream>
using namespace std;

// Class definition for a Coordinate object
class Coordinate {
    public:
        int x;
        int y;
    
      // Default constructor - try commenting it out
      Coordinate() {} 
    
      // Parameterized constructor
      Coordinate(int a, int b) {x = a; y =b;}
    
      // Class method for printing a coordinate
      void printCoordMethod();
};

// Definition for class method
// Notice the :: operator
void Coordinate::printCoordMethod() {
    // We have direct access to x and y attributes
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// Definition for standalone function
// Notice we have to pass the Coordinate object
//    as a parameter now
void printCoordFnct(Coordinate p) {
    // Attributes accessed through p now
    cout << "(" << p.x << ", " << p.y << ")" << endl;
    return;
}

// Pass-by-Value and Pass-by-Reference example
// Try removing the ampersand (&) in front of p
void transform(Coordinate &p, int xOffset, int yOffset) {
    p.x += xOffset;
    p.y = p.y + yOffset;
    return;
}

int main() {
    // Call parameterized constructor
    Coordinate coord1 = Coordinate(7, 8);
    // Call default constructor
    Coordinate coord2 = Coordinate();
  
    // Notice how the function calls here differ
    printCoordFnct(coord1); // Standalone - pass coord1 as parameter
    coord1.printCoordMethod(); // Method - coord1 is calling object

    // Call transform function
    transform(coord1, 2, 2);
  
    // Did the coordinate actually change?
    // Yes if & is present in parameter list before p (PB-Reference)
    // No otherwise (PB-Value)
    printCoordFnct(coord1);
  
    return 0;
}

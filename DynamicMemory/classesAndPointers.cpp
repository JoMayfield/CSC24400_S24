// A program showing how pointers work with classes
// Specifically:
//    1. A pointer to an object of a user-defined type
//    2. A method returning a reference to its calling object
#include <iostream>
using namespace std;

class Coordinate {
    private:
        int x;
        int y;
    
    public:
      Coordinate() {} 
      Coordinate(int a, int b) {x = a; y =b;}
      
      int& get_x() {return x;}
      void printCoordMethod();
      
      // Returns a reference to a Coordinate
      Coordinate& scale(const int val);
};

// Scales (x, y) to (x*val, y*val)
Coordinate& Coordinate::scale(const int val){
    x = x*val;
    y = y*val;
    return *this; // Rets a reference to the calling object
}

void Coordinate::printCoordMethod() {
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

int main() {
    // 1.
    Coordinate* coordPtr = new Coordinate(5, 6);
    //cout << coordPtr.get_x() << endl; // ERROR
    
    // The following two lines are essentially equivalent
    cout << (*coordPtr).get_x() << endl; // De-reference, then call get_x()
    cout << coordPtr->get_x() << endl; // Alternative notation
    
    
    // 2. 
    Coordinate coord1 = Coordinate(7, 8);
    
    coord1.printCoordMethod();
    // Can chain calls to scale() because we returned *this
    coord1.scale(10).scale(2).scale(2);
    coord1.printCoordMethod();
    
    return 0;
}

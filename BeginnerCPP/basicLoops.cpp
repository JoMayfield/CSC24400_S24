#include <iostream>
using namespace std;

int main() {
	// Try changing bounds
	// "i <= 10" and "i < 11" are equivalent
	for(int i = 1; i <= 10; i++) {
		cout << i << endl;
	}
	
	// While-loop syntax
	int x = 5;
	while(x > 3)
	{
		cout << "x is: " << x << endl;
		x = x-3;
	}
	
	// Your task:
	/* Write a while-loop that is
		 equivalent to the first
		 for-loop in this example */

	return 0;
}

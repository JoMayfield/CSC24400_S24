// This program shows the two arguments to the main() function
//    argc and argv.
// This allows us to get input from the user via the command line
//    when executing a C++ executable program
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // argc represents the number of arguments passed through the cmd line
    cout << "Number of arguments: " << argc << endl;
    
    // Loop through argv, which is an array where argv[i] contains
    //    argument i.
    for(int i = 0; i < argc; i++)
        cout << "Arg " << i << " is: " << argv[i] << endl;
    
    return 0;
}

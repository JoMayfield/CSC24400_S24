#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s1 = "";
    string s2 = "";
  
    // Create input file stream object and open input file
    ifstream fin("getlineInput.txt");
  
    // getline() provides another way besides fin for us to
    //    read file data
    getline(fin, s1);
    getline(fin, s2);
  
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}

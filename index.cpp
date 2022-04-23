#include <iostream>
#include <string>
using namespace std;

int main() {
    string mystring;
    cout << "Enter a string: ";
    getline(cin, mystring);
    cout << "The string is: " << mystring << endl;
    return 0;
}
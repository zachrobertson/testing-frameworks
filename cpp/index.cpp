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

class Rectangle {
    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
        int getLength() {
            return length;
        }
        int getWidth() {
            return width;
        }
        int getArea() {
            return length * width;
        }
    private:
        int length;
        int width;
};

class Square : public Rectangle {
    public:
        Square(int s) : Rectangle(s, s) {
        }
};
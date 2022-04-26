#include <iostream>
#include <string>
using namespace std;

float half_plus_one(float x) {
    return (x * 0.5) + 1.0;
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
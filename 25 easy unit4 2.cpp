#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() : length(0), width(0) {}

    Rectangle(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }
};

int main() {
    const int SIZE = 3;
    Rectangle rectangles[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        int length, width;
        cout << "Enter length of rectangle " << i + 1 << ": ";
        cin >> length;
        cout << "Enter width of rectangle " << i + 1 << ": ";
        cin >> width;
        rectangles[i] = Rectangle(length, width);
    }

    for (int i = 0; i < SIZE; ++i) {
        cout << "Area of rectangle " << i + 1 << ": " << rectangles[i].area() << endl;
    }

    return 0;
}


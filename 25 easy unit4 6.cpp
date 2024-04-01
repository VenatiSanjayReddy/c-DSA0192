#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float area() {
        return side * side;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    float radius, side;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    Circle circle(radius);
    cout << "Area of circle: " << circle.area() << endl;

    cout << "Enter the length of the square: ";
    cin >> side;

    Square square(side);
    cout << "Area of square: " << square.area() << endl;

    return 0;
}


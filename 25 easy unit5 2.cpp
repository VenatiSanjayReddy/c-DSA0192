#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
protected:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() {
        return length * width;
    }
};

class Cuboid : public Rectangle, public Shape {
protected:
    float height;

public:
    Cuboid(float l, float w, float h) : Rectangle(l, w), height(h) {}

    float area() {
        return 2 * (length * width + length * height + width * height);
    }

    float volume() {
        return length * width * height;
    }
};

int main() {
    float length, width, height;

    cout << "Enter length of cuboid: ";
    cin >> length;
    cout << "Enter width of cuboid: ";
    cin >> width;
    cout << "Enter height of cuboid: ";
    cin >> height;

    Cuboid cuboid(length, width, height);

    cout << "Area of the cuboid: " << cuboid.area() << endl;
    cout << "Volume of the cuboid: " << cuboid.volume() << endl;

    return 0;
}


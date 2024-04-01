#include <iostream>
#include <cmath>
using namespace std;

float rectangleArea(float length, float width) {
    return length * width;
}

float circleArea(float radius) {
    return M_PI * radius * radius;
}

float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of rectangle: " << rectangleArea(4.0, 5.0) << endl;
    cout << "Area of circle: " << circleArea(2.5) << endl;
    cout << "Area of triangle: " << triangleArea(3.0, 4.0) << endl;
    return 0;
}


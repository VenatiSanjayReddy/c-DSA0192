#include <iostream>
using namespace std;

const float PI = 3.14159;

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    float area = PI * radius * radius;
    
    cout << "The area of the circle is: " << area << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

const float PI = 3.14159;

int main() {
    float radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
    float volume = (4.0 / 3.0) * PI * radius * radius * radius;
    
    cout << "The volume of the sphere is: " << volume << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    if (num2 != 0) {
        float result = static_cast<float>(num1) / num2;
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    
    return 0;
}


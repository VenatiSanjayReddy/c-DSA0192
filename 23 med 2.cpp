#include <iostream>
using namespace std;

int main() {
    int num1;
    float num2;
    
    cout << "Enter an integer: ";
    cin >> num1;
    
    cout << "Enter a float: ";
    cin >> num2;
    
    float result = num2 / num1;
    
    cout << "Result of float divided by integer: " << result << endl;
    
    return 0;
}


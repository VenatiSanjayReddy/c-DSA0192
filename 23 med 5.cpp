#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num & 1) {
        cout << num << " is an odd number." << endl;
    } else {
        cout << num << " is an even number." << endl;
    }
    
    return 0;
}


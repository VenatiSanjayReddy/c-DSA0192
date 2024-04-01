#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int value1, value2, value3, value4;

    cout << "Enter the value: ";
    cin >> value1 >> value2 >> value3 >> value4;

    int result = sum(value1, value2, value3, value4);
    cout << result << endl;

    return 0;
}


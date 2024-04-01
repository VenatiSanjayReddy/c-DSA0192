#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    if (arr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    cout << "Memory allocation successful!" << endl;

    delete[] arr;
    return 0;
}


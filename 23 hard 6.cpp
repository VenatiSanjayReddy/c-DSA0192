#include <iostream>
using namespace std;

template <typename T>
T maxElement(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArr[] = {3, 7, 2, 9, 5};
    float floatArr[] = {3.5, 1.2, 4.7, 2.8};
    double doubleArr[] = {9.4, 2.1, 7.8, 4.5};

    cout << "Maximum element in intArr: " << maxElement(intArr, 5) << endl;
    cout << "Maximum element in floatArr: " << maxElement(floatArr, 4) << endl;
    cout << "Maximum element in doubleArr: " << maxElement(doubleArr, 4) << endl;

    return 0;
}


#include <iostream>
using namespace std;

void displayCubes(int limit) {
    for (int i = 1; i <= limit; ++i) {
        cout << "Cube of " << i << " is: " << i * i * i << endl;
    }
}

int main() {
    int n;

    cout << "Enter the limit: ";
    cin >> n;

    displayCubes(n);

    return 0;
}


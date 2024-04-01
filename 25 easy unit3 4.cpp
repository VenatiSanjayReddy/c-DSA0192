#include <iostream>
using namespace std;

class RightAngleTriangle {
private:
    int rows;

public:
    RightAngleTriangle() : rows(5) {}

    RightAngleTriangle(int r) : rows(r) {}

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;

    cout << "Enter the number of rows for the right angle triangle: ";
    cin >> rows;

    RightAngleTriangle triangle(rows);

    cout << "Pattern of right angle triangle with repeating numbers:" << endl;
    triangle.printPattern();

    return 0;
}


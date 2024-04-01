#include <iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator(int n) : limit(n) {}

    void displayCubes() {
        for (int i = 1; i <= limit; ++i) {
            cout << "Cube of " << i << " is: " << i * i * i << endl;
        }
    }

    ~CubeCalculator() {
        cout << "Destructor called." << endl;
    }

private:
    int limit;
};

int main() {
    int n;

    cout << "Enter the limit: ";
    cin >> n;

    CubeCalculator calculator(n);
    calculator.displayCubes();

    return 0;
}


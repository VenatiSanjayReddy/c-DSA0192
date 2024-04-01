#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real;
    int imaginary;

public:
    ComplexNumber(int r, int i) : real(r), imaginary(i) {}

    void printValues() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    ComplexNumber num(1, 54);
    ComplexNumber *ptr = &num;

    ptr->printValues();

    return 0;
}


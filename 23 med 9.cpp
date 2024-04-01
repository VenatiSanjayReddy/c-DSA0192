#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(const Complex& c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display() {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);
    
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    
    cout << "Sum: ";
    sum.display();
    
    cout << "Difference: ";
    diff.display();
    
    return 0;
}


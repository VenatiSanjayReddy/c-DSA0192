#include <iostream>
using namespace std;

class Number1 {
protected:
    int num1;

public:
    void setNum1(int n) {
        num1 = n;
    }
};

class Number2 {
protected:
    int num2;

public:
    void setNum2(int n) {
        num2 = n;
    }
};

class Sum : public Number1, public Number2 {
public:
    int findSum() {
        return num1 + num2;
    }
};

int main() {
    Sum sumObject;

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sumObject.setNum1(num1);
    sumObject.setNum2(num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sumObject.findSum() << endl;

    return 0;
}


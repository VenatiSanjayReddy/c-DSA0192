#include <iostream>
using namespace std;

class A {
protected:
    int x;

public:
    A() : x(0) {}

    void setX(int val) {
        x = val;
    }

    int getX() {
        return x;
    }
};

class B : private A {
public:
    using A::setX; // Making setX from class A accessible in class B
    void displayX() {
        cout << "value of x: " << getX() << endl;
    }
};

int main() {
    B obj;

    obj.setX(10);

    cout << "Here x is the protected data member of class A," << endl;
    cout << "class A is inherited privately to class B." << endl;
    cout << "In private inheritance, only protected data members and member functions can be accessed by the derived class." << endl;

    cout << endl;
    obj.displayX();

    return 0;
}


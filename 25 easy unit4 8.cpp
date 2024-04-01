#include <iostream>
using namespace std;

class A {
protected:
    int a;

public:
    void setA(int val) {
        a = val;
    }
};

class B {
protected:
    int b;

public:
    void setB(int val) {
        b = val;
    }
};

class C : public A, public B {
private:
    int c;

public:
    void setC(int val) {
        c = val;
    }

    void displayValues() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
};

int main() {
    C obj;

    obj.setA(100);
    obj.setB(200);
    obj.setC(300);

    cout << "Input given in the program itself." << endl;
    obj.displayValues();

    return 0;
}


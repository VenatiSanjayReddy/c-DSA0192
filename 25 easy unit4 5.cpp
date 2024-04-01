#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    void setX(int x) {
        this->x = x;
    }

    void printX() {
        cout << "Value of x: " << this->x << endl;
    }
};

int main() {
    MyClass obj;

    obj.setX(20);

    cout << "The input given in the program itself" << endl;
    obj.printX();

    return 0;
}


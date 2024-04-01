#include <iostream>
using namespace std;

class Grandfather {
private:
    int propertyValue;

public:
    Grandfather(int value) : propertyValue(value) {}

    int getProperty() {
        return propertyValue;
    }
};

class Grandson : public Grandfather {
public:
    Grandson(int value) : Grandfather(value) {}

    void receiveProperty() {
        int propertyValue = getProperty();
        cout << "Received the Property worth " << propertyValue << " Cr" << endl;
    }
};

int main() {
    int propertyValue = 500;
    Grandson grandson(propertyValue);
    grandson.receiveProperty();

    return 0;
}


#include <iostream>

typedef void (*CallbackFunction)(int);

void performOperation(int value, CallbackFunction callback) {
    std::cout << "Performing operation with value: " << value << std::endl;
    callback(value * 2);
}

void callbackFunction(int result) {
    std::cout << "Callback function called with result: " << result << std::endl;
}

int main() {
    performOperation(5, callbackFunction);
    return 0;
}


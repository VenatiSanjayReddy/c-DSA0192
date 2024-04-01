#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctal {
private:
    long long binaryNumber;
    int octalNumber;

public:
    BinaryToOctal(long long bin) : binaryNumber(bin), octalNumber(0) {}

    void convertToOctal() {
        int decimalNumber = 0, i = 0;

        // Convert binary to decimal
        while (binaryNumber != 0) {
            int remainder = binaryNumber % 10;
            decimalNumber += remainder * pow(2, i);
            ++i;
            binaryNumber /= 10;
        }

        // Convert decimal to octal
        i = 1;
        while (decimalNumber != 0) {
            octalNumber += (decimalNumber % 8) * i;
            decimalNumber /= 8;
            i *= 10;
        }
    }

    int getOctalNumber() {
        return octalNumber;
    }
};

int main() {
    long long binaryNum;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    BinaryToOctal bToO(binaryNum);
    bToO.convertToOctal();

    cout << "Octal equivalent: " << bToO.getOctalNumber() << endl;

    return 0;
}



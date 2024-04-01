#include <iostream>
using namespace std;

class ReverseNumber {
private:
    int number;

public:
    ReverseNumber() : number(0) {}

    ReverseNumber(int num) : number(num) {}

    int reverse() {
        int reversedNum = 0;
        int originalNum = number;

        while (originalNum != 0) {
            int digit = originalNum % 10;
            reversedNum = reversedNum * 10 + digit;
            originalNum /= 10;
        }

        return reversedNum;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    ReverseNumber reverseNum(num);

    cout << "Reverse of the number " << num << " is: " << reverseNum.reverse() << endl;

    return 0;
}


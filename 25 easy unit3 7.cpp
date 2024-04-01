#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int start;
    int end;
    int sum;

public:
    DivisibleByNine(int s, int e) : start(s), end(e), sum(0) {}

    ~DivisibleByNine() {}

    void findAndSum() {
        for (int i = start; i <= end; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
            }
        }
    }

    int getSum() {
        return sum;
    }
};

int main() {
    DivisibleByNine divisible(100, 200);

    cout << "Numbers between 100 and 200 divisible by 9: ";
    divisible.findAndSum();
    cout << endl;

    cout << "Sum of the numbers divisible by 9: " << divisible.getSum() << endl;

    return 0;
}


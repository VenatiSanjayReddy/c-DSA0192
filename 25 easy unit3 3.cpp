#include <iostream>
using namespace std;

class SeriesSum {
private:
    int sum;

public:
    SeriesSum() : sum(0) {}

    SeriesSum(int initialValue) : sum(initialValue) {}

    SeriesSum(int start, int end) {
        sum = 0;
        for (int i = start; i <= end; ++i) {
            sum += i;
        }
    }

    int getSum() {
        return sum;
    }
};

int main() {
    int start, end;

    cout << "Enter the start of the series: ";
    cin >> start;
    cout << "Enter the end of the series: ";
    cin >> end;

    SeriesSum series(start, end);

    cout << "Sum of the series from " << start << " to " << end << " is: " << series.getSum() << endl;

    return 0;
}


#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    Matrix operator+(const Matrix& other) const {
    }

    Matrix operator-(const Matrix& other) const {
    }

    Matrix operator*(const Matrix& other) const {
    }
};

int main() {
    return 0;
}


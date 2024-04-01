#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

double calculateAverage(const std::vector<double>& data) {
    double sum = 0;
    for (size_t i = 0; i < data.size(); ++i) {
        sum += data[i];
    }
    return sum / data.size();
}

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return 1;
    }

    std::vector<double> data;
    double value;
    while (inputFile >> value) {
        data.push_back(value);
    }

    if (inputFile.fail() && !inputFile.eof()) {
        std::cerr << "Error: Invalid data encountered while reading the file." << std::endl;
        return 1;
    }

    try {
        double average = calculateAverage(data);
        std::cout << "Average: " << average << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    inputFile.close();
    return 0;
}


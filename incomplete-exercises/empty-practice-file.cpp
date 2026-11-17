#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the number of values: ";
    if (!(std::cin >> size) || size <= 0) {
        std::cerr << "The size must be a positive integer.\n";
        return 1;
    }

    std::vector<int> values(size);
    std::cout << "Enter the values: ";
    for (int& value : values) {
        if (!(std::cin >> value)) {
            std::cerr << "Invalid value.\n";
            return 1;
        }
    }

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for (int value : values) {
        if (value > 0) {
            ++positiveCount;
        } else if (value < 0) {
            ++negativeCount;
        } else {
            ++zeroCount;
        }
    }

    std::cout << "Positive: " << positiveCount << "\nNegative: "
              << negativeCount << "\nZero: " << zeroCount << '\n';
    return 0;
}

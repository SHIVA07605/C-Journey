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

    int smallest = values.front();
    int largest = values.front();
    long long sum = 0;
    for (int value : values) {
        if (value < smallest) {
            smallest = value;
        }
        if (value > largest) {
            largest = value;
        }
        sum += value;
    }

    std::cout << "Smallest: " << smallest << "\nLargest: " << largest
              << "\nSum: " << sum
              << "\nAverage: " << static_cast<double>(sum) / size << '\n';
    return 0;
}


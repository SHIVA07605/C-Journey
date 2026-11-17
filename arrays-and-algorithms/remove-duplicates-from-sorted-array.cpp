#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the number of elements in the sorted array: ";
    if (!(std::cin >> size) || size < 0) {
        std::cerr << "The size must be a non-negative integer.\n";
        return 1;
    }

    std::vector<int> values(size);
    std::cout << "Enter the elements in sorted order: ";
    for (int& value : values) {
        if (!(std::cin >> value)) {
            std::cerr << "Invalid element.\n";
            return 1;
        }
    }
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i - 1] > values[i]) {
            std::cerr << "The input array must be sorted.\n";
            return 1;
        }
    }

    std::vector<int> uniqueValues;
    for (int value : values) {
        if (uniqueValues.empty() || uniqueValues.back() != value) {
            uniqueValues.push_back(value);
        }
    }

    std::cout << "Array without duplicates: ";
    for (int value : uniqueValues) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

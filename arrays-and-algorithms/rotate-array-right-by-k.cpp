#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> size) || size <= 0) {
        std::cerr << "The size must be a positive integer.\n";
        return 1;
    }

    std::vector<int> values(size);
    std::cout << "Enter the elements: ";
    for (int& value : values) {
        if (!(std::cin >> value)) {
            std::cerr << "Invalid element.\n";
            return 1;
        }
    }

    long long rotations;
    std::cout << "Enter the number of right rotations: ";
    if (!(std::cin >> rotations)) {
        std::cerr << "Invalid rotation count.\n";
        return 1;
    }

    const long long normalized =
        ((rotations % size) + size) % size;
    std::rotate(values.begin(), values.end() - normalized, values.end());

    std::cout << "Rotated array: ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

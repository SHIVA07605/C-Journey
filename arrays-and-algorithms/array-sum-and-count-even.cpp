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

    long long sum = 0;
    int evenCount = 0;
    for (int value : values) {
        sum += value;
        if (value % 2 == 0) {
            ++evenCount;
        }
    }

    std::cout << "Sum: " << sum << '\n'
              << "Even elements: " << evenCount << '\n';
    return 0;
}

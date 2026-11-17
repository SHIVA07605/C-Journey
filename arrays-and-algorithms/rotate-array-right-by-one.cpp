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

    const int last = values.back();
    for (std::size_t i = values.size() - 1; i > 0; --i) {
        values[i] = values[i - 1];
    }
    values.front() = last;

    std::cout << "Rotated array: ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
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

    std::cout << "Largest element: "
              << *std::max_element(values.begin(), values.end()) << '\n';
    return 0;
}

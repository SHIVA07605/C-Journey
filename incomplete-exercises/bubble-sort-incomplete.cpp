#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> size) || size < 0) {
        std::cerr << "The size must be a non-negative integer.\n";
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

    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t i = 1; i < end; ++i) {
            if (values[i - 1] > values[i]) {
                std::swap(values[i - 1], values[i]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    std::cout << "Sorted array: ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

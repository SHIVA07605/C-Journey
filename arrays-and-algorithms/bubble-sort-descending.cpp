#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{5, 1, 3, 4, 2};

    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t i = 1; i < end; ++i) {
            if (values[i - 1] < values[i]) {
                std::swap(values[i - 1], values[i]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    std::cout << "Sorted array (descending): ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

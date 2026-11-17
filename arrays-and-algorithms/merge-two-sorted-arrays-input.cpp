#include <iostream>
#include <vector>

std::vector<int> readSortedArray(int size) {
    std::vector<int> values(size);
    for (int& value : values) {
        if (!(std::cin >> value)) {
            return {};
        }
    }
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i - 1] > values[i]) {
            return {};
        }
    }
    return values;
}

int main() {
    int firstSize;
    int secondSize;
    std::cout << "Enter the size of the first sorted array: ";
    if (!(std::cin >> firstSize) || firstSize < 0) {
        std::cerr << "The size must be a non-negative integer.\n";
        return 1;
    }
    std::cout << "Enter its elements in sorted order: ";
    const std::vector<int> first = readSortedArray(firstSize);
    if (first.size() != static_cast<std::size_t>(firstSize)) {
        std::cerr << "Invalid or unsorted first array.\n";
        return 1;
    }

    std::cout << "Enter the size of the second sorted array: ";
    if (!(std::cin >> secondSize) || secondSize < 0) {
        std::cerr << "The size must be a non-negative integer.\n";
        return 1;
    }
    std::cout << "Enter its elements in sorted order: ";
    const std::vector<int> second = readSortedArray(secondSize);
    if (second.size() != static_cast<std::size_t>(secondSize)) {
        std::cerr << "Invalid or unsorted second array.\n";
        return 1;
    }

    std::vector<int> merged;
    merged.reserve(first.size() + second.size());
    std::size_t i = 0;
    std::size_t j = 0;
    while (i < first.size() && j < second.size()) {
        if (first[i] <= second[j]) {
            merged.push_back(first[i++]);
        } else {
            merged.push_back(second[j++]);
        }
    }
    merged.insert(merged.end(), first.begin() + i, first.end());
    merged.insert(merged.end(), second.begin() + j, second.end());

    std::cout << "Merged array: ";
    for (int value : merged) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

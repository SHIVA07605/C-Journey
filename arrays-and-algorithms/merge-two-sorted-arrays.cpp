#include <iostream>
#include <vector>

int main() {
    const std::vector<int> first{1, 4, 7};
    const std::vector<int> second{2, 3, 8};
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

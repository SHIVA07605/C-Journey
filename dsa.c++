#include <iostream>
#include <vector>

void merge(std::vector<int>& values, int first, int middle, int last) {
    std::vector<int> sorted;
    sorted.reserve(static_cast<std::size_t>(last - first + 1));
    int left = first;
    int right = middle + 1;

    while (left <= middle && right <= last) {
        if (values[left] <= values[right]) {
            sorted.push_back(values[left++]);
        } else {
            sorted.push_back(values[right++]);
        }
    }
    while (left <= middle) {
        sorted.push_back(values[left++]);
    }
    while (right <= last) {
        sorted.push_back(values[right++]);
    }
    for (std::size_t i = 0; i < sorted.size(); ++i) {
        values[first + static_cast<int>(i)] = sorted[i];
    }
}

void mergeSort(std::vector<int>& values, int first, int last) {
    if (first >= last) {
        return;
    }

    const int middle = first + (last - first) / 2;
    mergeSort(values, first, middle);
    mergeSort(values, middle + 1, last);
    merge(values, first, middle, last);
}

int main() {
    std::vector<int> values{1, 5, 3, 2, 6, 4};
    mergeSort(values, 0, static_cast<int>(values.size()) - 1);

    std::cout << "Sorted array: ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}

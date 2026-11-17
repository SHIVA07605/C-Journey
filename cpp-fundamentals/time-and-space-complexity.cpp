#include <iostream>
#include <vector>

long long sumValues(const std::vector<int>& values) {
    long long sum = 0;
    for (int value : values) {
        sum += value;
    }
    return sum;
}

int main() {
    const std::vector<int> values{1, 2, 3, 4, 5};
    std::cout << "Sum: " << sumValues(values) << '\n'
              << "sumValues runs in O(n) time and O(1) extra space.\n";
    return 0;
}

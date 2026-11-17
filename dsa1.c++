#include <functional>
#include <iostream>
#include <queue>
#include <vector>

int main() {
    const std::vector<int> values{3, 1, 6, 5, 2, 4};
    std::priority_queue<int> maxHeap(values.begin(), values.end());
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(
        values.begin(), values.end());

    std::cout << "Max-heap order: ";
    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << ' ';
        maxHeap.pop();
    }

    std::cout << "\nMin-heap order: ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << ' ';
        minHeap.pop();
    }
    std::cout << '\n';
    return 0;
}

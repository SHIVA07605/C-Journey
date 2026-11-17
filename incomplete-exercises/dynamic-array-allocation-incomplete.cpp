#include <iostream>
#include <memory>

class DynamicArray {
public:
    explicit DynamicArray(int size)
        : size_(size), values_(std::make_unique<int[]>(size)) {}

    void read() {
        std::cout << "Enter " << size_ << " elements: ";
        for (int i = 0; i < size_; ++i) {
            if (!(std::cin >> values_[i])) {
                std::cerr << "Invalid element.\n";
                return;
            }
        }
    }

    void display() const {
        std::cout << "Array: ";
        for (int i = 0; i < size_; ++i) {
            std::cout << values_[i] << ' ';
        }
        std::cout << '\n';
    }

private:
    int size_;
    std::unique_ptr<int[]> values_;
};

int main() {
    int size;
    std::cout << "Enter the array size: ";
    if (!(std::cin >> size) || size <= 0) {
        std::cerr << "The size must be a positive integer.\n";
        return 1;
    }

    DynamicArray values(size);
    values.read();
    if (!std::cin) {
        return 1;
    }
    values.display();
    return 0;
}

#include <iostream>

void swapByValue(int first, int second) {
    const int temporary = first;
    first = second;
    second = temporary;
    std::cout << "Inside call by value: " << first << ", " << second << '\n';
}

void swapByReference(int& first, int& second) {
    const int temporary = first;
    first = second;
    second = temporary;
}

void swapByAddress(int* first, int* second) {
    if (first == nullptr || second == nullptr) {
        return;
    }
    const int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main() {
    int first;
    int second;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Please enter two valid integers.\n";
        return 1;
    }

    std::cout << "Original values: " << first << ", " << second << '\n';
    swapByValue(first, second);
    std::cout << "After call by value: " << first << ", " << second << '\n';
    swapByReference(first, second);
    std::cout << "After call by reference: " << first << ", " << second
              << '\n';
    swapByAddress(&first, &second);
    std::cout << "After call by address: " << first << ", " << second << '\n';
    return 0;
}

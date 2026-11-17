#include <iostream>

int add(int first, int second) {
    return first + second;
}

int main() {
    int first;
    int second;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Please enter two valid integers.\n";
        return 1;
    }

    std::cout << "Sum: " << add(first, second) << '\n';
    return 0;
}

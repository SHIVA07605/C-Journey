#include <iostream>

int main() {
    int first;
    int second;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Please enter two valid integers.\n";
        return 1;
    }

    std::cout << "Sum: " << first + second << '\n';
    return 0;
}

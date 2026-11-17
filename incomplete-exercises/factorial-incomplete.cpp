#include <iostream>

int main() {
    int number;
    std::cout << "Enter a non-negative integer (0-20): ";
    if (!(std::cin >> number) || number < 0 || number > 20) {
        std::cerr << "Enter an integer from 0 to 20.\n";
        return 1;
    }

    unsigned long long factorial = 1;
    for (int factor = 2; factor <= number; ++factor) {
        factorial *= static_cast<unsigned long long>(factor);
    }
    std::cout << number << "! = " << factorial << '\n';
    return 0;
}

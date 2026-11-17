#include <iostream>

long long calculateResult(int first, int second, int third, int fourth,
                          int fifth) {
    const long long sum = static_cast<long long>(first) + second + third +
                          fourth + fifth;
    const long long product = static_cast<long long>(first) * fifth;
    std::cout << "Sum: " << sum << '\n'
              << "Product of first and last numbers: " << product << '\n';
    return sum - product;
}

int main() {
    int first;
    int second;
    int third;
    int fourth;
    int fifth;
    std::cout << "Enter five integers: ";
    if (!(std::cin >> first >> second >> third >> fourth >> fifth)) {
        std::cerr << "Please enter five valid integers.\n";
        return 1;
    }

    const long long result =
        calculateResult(first, second, third, fourth, fifth);
    std::cout << "Sum minus product: " << result << '\n'
              << "The result is " << (result % 2 == 0 ? "even.\n" : "odd.\n");
    return 0;
}

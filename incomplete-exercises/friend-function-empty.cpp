#include <iostream>

class Number {
public:
    explicit Number(int value) : value_(value) {}

    friend int add(const Number& first, const Number& second);

private:
    int value_;
};

int add(const Number& first, const Number& second) {
    return first.value_ + second.value_;
}

int main() {
    const Number first(12);
    const Number second(8);
    std::cout << "Sum: " << add(first, second) << '\n';
    return 0;
}

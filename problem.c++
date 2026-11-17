#include <iostream>

class Complex {
public:
    Complex(double real = 0.0, double imaginary = 0.0)
        : real_(real), imaginary_(imaginary) {}

    Complex operator+(const Complex& other) const {
        return Complex(real_ + other.real_, imaginary_ + other.imaginary_);
    }

    void display() const {
        std::cout << real_;
        if (imaginary_ >= 0) {
            std::cout << " + " << imaginary_ << 'i';
        } else {
            std::cout << " - " << -imaginary_ << 'i';
        }
        std::cout << '\n';
    }

private:
    double real_;
    double imaginary_;
};

int main() {
    const Complex first(2.0, 3.0);
    const Complex second(5.0, 4.0);
    const Complex sum = first + second;
    std::cout << "Sum: ";
    sum.display();
    return 0;
}

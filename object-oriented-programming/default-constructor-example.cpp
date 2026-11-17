#include <iostream>

class Example {
public:
    explicit Example(int value = 7) : value_(value) {}

    int value() const {
        return value_;
    }

private:
    int value_;
};

int main() {
    const Example defaultObject;
    const Example customObject(10);

    std::cout << defaultObject.value() << '\n'
              << customObject.value() << '\n';
    return 0;
}

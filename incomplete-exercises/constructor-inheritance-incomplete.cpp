#include <iostream>
#include <memory>
#include <string>
#include <utility>

class Animal {
public:
    explicit Animal(std::string name) : name_(std::move(name)) {}
    virtual ~Animal() = default;

    virtual void speak() const = 0;

protected:
    std::string name_;
};

class Dog : public Animal {
public:
    using Animal::Animal;

    void speak() const override {
        std::cout << name_ << " says Woof!\n";
    }
};

class Cat : public Animal {
public:
    using Animal::Animal;

    void speak() const override {
        std::cout << name_ << " says Meow!\n";
    }
};

class Battery {
public:
    explicit Battery(int capacity) : capacity_(capacity) {
        std::cout << "Battery created.\n";
    }

    ~Battery() {
        std::cout << "Battery destroyed.\n";
    }

    int capacity() const {
        return capacity_;
    }

private:
    int capacity_;
};

class Device {
public:
    Device(std::string brand, int capacity)
        : brand_(std::move(brand)), battery_(capacity) {
        std::cout << "Device created.\n";
    }

    ~Device() {
        std::cout << "Device destroyed.\n";
    }

    void display() const {
        std::cout << "Brand: " << brand_ << "\nBattery capacity: "
                  << battery_.capacity() << " mAh\n";
    }

private:
    std::string brand_;
    Battery battery_;
};

int main() {
    const std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex");
    const std::unique_ptr<Animal> cat = std::make_unique<Cat>("Milo");
    dog->speak();
    cat->speak();

    {
        const Device phone("Example", 5000);
        phone.display();
    }
    return 0;
}

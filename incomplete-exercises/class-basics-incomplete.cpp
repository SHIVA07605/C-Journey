#include <iostream>
#include <string>
#include <utility>

class Teacher {
public:
    Teacher(std::string name, std::string subject)
        : name_(std::move(name)), subject_(std::move(subject)) {}

    void display() const {
        std::cout << "Teacher: " << name_ << "\nSubject: " << subject_ << '\n';
    }

private:
    std::string name_;
    std::string subject_;
};

int main() {
    Teacher teacher("Asha", "Computer Science");
    teacher.display();
    return 0;
}

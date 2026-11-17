#include <iostream>
#include <string>
#include <utility>

class Employee {
public:
    Employee(int id, std::string name, int salary)
        : id_(id), name_(std::move(name)), salary_(salary) {}

    virtual ~Employee() = default;

    virtual void display() const {
        std::cout << "Employee ID: " << id_ << "\nName: " << name_
                  << "\nSalary: " << salary_ << '\n';
    }

protected:
    int id_;
    std::string name_;
    int salary_;
};

class Manager : public Employee {
public:
    Manager(int id, std::string name, int salary, std::string department)
        : Employee(id, std::move(name), salary),
          department_(std::move(department)) {}

    void display() const override {
        Employee::display();
        std::cout << "Department: " << department_ << '\n';
    }

private:
    std::string department_;
};

int main() {
    const Employee employee(1, "Asha", 50000);
    const Manager manager(2, "Ravi", 60000, "Engineering");

    std::cout << "Employee details:\n";
    employee.display();
    std::cout << "\nManager details:\n";
    manager.display();
    return 0;
}

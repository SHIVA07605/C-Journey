#include <fstream>
#include <iostream>

int main() {
    std::ofstream output("example.txt");
    if (!output) {
        std::cerr << "Could not open example.txt for writing.\n";
        return 1;
    }

    output << "Name: Example Student\n"
           << "Student ID: 12345\n";
    if (!output) {
        std::cerr << "Could not write to example.txt.\n";
        return 1;
    }

    std::cout << "Wrote student details to example.txt.\n";
    return 0;
}

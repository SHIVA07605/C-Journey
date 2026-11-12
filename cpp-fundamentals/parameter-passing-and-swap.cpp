// program to swap to numbers using call by value and call by reference and call by adresss
#include <iostream>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After swapping (call by value): a = " << a << ", b = " << b << std::endl;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After swapping (call by reference): a = " << a << ", b = " << b << std::endl;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "After swapping (call by address): a = " << *a << ", b = " << *b << std::endl;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    // Call by value
    swapByValue(a, b);

    // Call by reference
    swapByReference(a, b);
    // Call by address
    swapByAddress(&a, &b);

    return 0;
}
// what is difference between inline function and normal function 
// An inline function is a function that is expanded in line when it is called, rather than being invoked through the usual function call mechanism. This means that the compiler replaces the function call with the actual code of the function, which can lead to faster execution time for small functions. Inline functions are typically defined using the 'inline' keyword in C++.
// A normal function, on the other hand, is a regular function that is called through the standard function call mechanism. This involves pushing the function's parameters onto the stack, jumping to the function's code, executing it, and then returning to the caller. Normal functions can have more overhead due to this process, especially for small functions that are called frequently.
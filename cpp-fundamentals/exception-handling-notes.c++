// #include <iostream>
// #include <stdexcept>

// double divide(double numerator, double denominator) {
//     if (denominator == 0) {
//         throw std::invalid_argument("denominator must not be zero");
//     }
//     return numerator / denominator;
// }

// int main() {
//     try {
//         std::cout << "Result: " << divide(10, 2) << '\n';
//         std::cout << "Result: " << divide(10, 0) << '\n';
//     } catch (const std::invalid_argument& error) {
//         std::cerr << "Invalid argument: " << error.what() << '\n';
//     } catch (const std::exception& error) {
//         std::cerr << "Standard exception: " << error.what() << '\n';
//     } catch (...) {
//         std::cerr << "Unknown exception occurred.\n";
//     }
// }

#include <iostream>

int main() {
    double base, exponent, result = 1.0;

    std::cout << "Enter the base number: ";
    std::cin >> base;

    std::cout << "Enter the exponent (a positive integer): ";
    std::cin >> exponent;

    if (exponent < 0) {
        std::cout << "Exponent should be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

    std::cout << base << " raised to the power " << exponent << " is: " << result << std::endl;

    return 0;
}

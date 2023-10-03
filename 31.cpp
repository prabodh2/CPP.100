#include <iostream>
#include <cmath>

int main() {
    int number, originalNumber, remainder, result = 0;
    int n = 0; // Count the number of digits

    std::cout << "Enter an integer: ";
    std::cin >> number;

    originalNumber = number;

    // Count the number of digits in the number
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the sum of digits each raised to the power of n
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if it's an Armstrong number
    if (result == number) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

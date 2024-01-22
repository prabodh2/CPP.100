#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int gcd = 1;  // Initialize the GCD to 1, as it's the minimum possible GCD
    // Find the GCD using a for loop
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;
    return 0;
}

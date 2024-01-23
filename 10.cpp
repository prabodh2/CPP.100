#include <iostream>

int main() {
    double base, height;

    // Prompt the user to enter the base and height
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    // Check if both base and height are positive
    if (base <= 0 || height <= 0) {
        std::cout << "Both base and height should be positive values." << std::endl;
        return 1; // Exit the program with an error code
    }
    // Calculate the area of the triangle
    double area = (0.5) * base * height;
    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;
    return 0;
}

#include <iostream>

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        // Display the menu
        std::cout << "Simple Calculator Menu:" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        // Exit the program if the user chooses option 5
        if (choice == 5) {
            std::cout << "Exiting the calculator. Goodbye!" << std::endl;
            break;
        }

        // Get user input for two numbers
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        // Perform the selected operation and display the result
        switch (choice) {
            case 1:
                result = num1 + num2;
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case 2:
                result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case 3:
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option (1-5)." << std::endl;
                break;
        }
    }

    return 0;
}

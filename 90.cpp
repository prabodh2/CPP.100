#include <iostream>

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; ++i) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        // Move to the next line
        std::cout << std::endl;
    }
    return 0;
}

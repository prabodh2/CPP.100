#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= i; ++k) {
            std::cout << "*";
        }
        
        std::cout << "\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int year;

    // Input year from the user
    std::cout << "Enter a year: ";
    std::cin >> year;
    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}

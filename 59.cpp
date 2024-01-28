#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "The array should contain at least two elements." << std::endl;
        return 1; // Exit the program with an error code
    }
    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int firstLargest = arr[0];
    int secondLargest = arr[1];

    if (secondLargest > firstLargest) {
        std::swap(firstLargest, secondLargest);
    }

    for (int i = 2; i < n; ++i) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    std::cout << "The second largest element in the array is: " << secondLargest << std::endl;

    return 0;
}

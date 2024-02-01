#include <iostream>

int main() {
    int size;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    if (size <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }
    int arr[size];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    // Remove duplicates
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite the duplicate
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size; // Reduce the size of the array
            } else {
                ++j;
            }
        }
    }
    std::cout << "Array with duplicates removed:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

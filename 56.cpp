#include <iostream>

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false; // If any element is less than the previous, the array is not sorted
        }
    }
    return true; // If the loop completes without finding any out-of-order elements, the array is sorted.
}

int main() {
    int size;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    int arr[size];
    
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    if (isSorted(arr, size)) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    } else {
        std::cout << "The array is not sorted in ascending order." << std::endl;
    }
    return 0;
}

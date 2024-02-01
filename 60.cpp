#include <iostream>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Intersection of the two arrays: ";

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                std::cout << arr1[i] << " ";
                break; // Break to avoid duplicate values in the intersection
            }
        }
    }
    std::cout << std::endl;
    return 0;
}

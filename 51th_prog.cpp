//Create an array of strings and display them in alphabetical order.
#include <iostream>
using namespace std;

int main() {
    // Create an array of strings
    string strings[] = {"Bombay", "Adoni", "Delhi", "Chennai", "Kharghar"};
                                                                                                    
    // Calculate the number of strings in the array
    int numStrings = sizeof(strings) / sizeof(strings[0]);
                                                                                                    
    // Simple sorting algorithm (Bubble Sort) to sort the strings alphabetically
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = 0; j < numStrings - i - 1; j++) {
            if (strings[j] > strings[j + 1]) {
                // Swap the strings if they are out of order
                string temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
                                                                                                    
    // Display the sorted strings
    cout << "Strings in alphabetical order:" <<endl;
    for (int i = 0; i < numStrings; i++) {
        cout << strings[i] << endl;
    }
    return 0;
}

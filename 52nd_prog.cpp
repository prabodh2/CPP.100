//Write a program to concatenate two strings without using the strcat function.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Define two strings
    char str1[] = " Hello ";
    char str2[] = "Prabodh";
                                                                                                
    // Calculate the lengths of the strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);
                                                                                                
    // Calculate the total length of the concatenated string
    int totalLength = len1 + len2;
                                                                                                
    // Create a new character array to hold the concatenated string
    char result[totalLength + 1]; // +1 for the null-terminator
                                                                                                
    // Copy the characters from the first string to the result
    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }

    // Copy the characters from the second string to the result
    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }

    // Null-terminate the result string
    result[totalLength] = '\0';

    // Output the concatenated string
    cout << "Concatenated String: " << result << endl;

    return 0;
}

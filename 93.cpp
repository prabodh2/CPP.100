#include<iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int current_char = 65; // ASCII value of 'A'
    // Loop for each row
    for(int i = 1; i <= n; i++) {
        // Loop for each column
        for(int j = 1; j <= i; j++) {
            cout << char(current_char) << " ";
            current_char++;
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
  // Number of rows in the pattern
  int rows = 5;
  // Outer loop for each row
  for (int i = rows; i >= 1; i--) {
    // Inner loop for each column
    for (int j = 1; j <= i; j++) {
      // Print an asterisk
      cout << "*";
    }
    // Print a newline after each row
    cout << endl;
  }
  return 0;
}

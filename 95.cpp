#include<iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows

    // Loop for each row
    for(int i = 1; i <= n; i++) {

        // Loop for each column
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Write a program to print all natural numbers from 1 to N using a while loop.
#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Enter the value of N: ";
    cin >> N;
    
    int i = 1; 

    while (i <= N) {
        cout << i << " ";
        i++; 
    }
    cout << endl; 
    
    return 0;
}

//Implement a program to reverse a number using a while loop.
#include <iostream>
using namespace std;

int main() {
                                                                                    
    int num, reverse_num = 0;
    cout << "Enter a number: ";
    cin >> num;
                                                                                    
    while (num != 0){
        int remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        
        num /= 10;
    }
                                                                                    
    cout << reverse_num;
                                                                                    
    return 0;
}

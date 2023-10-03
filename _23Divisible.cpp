#include <iostream>
using namespace std;

int main()
{
    int choice;
    do{
        int number;
        cout << "Enter a number: ";
        cin >> number;
        cout << endl;
        
        if (number % 5 == 0 && number % 11 == 0)
        {
            cout << number << " is divisible by 5 and 11" << endl;

        }
        else if (number < 0)
        {
            cout << "Please enter a positive number" << endl;

        }
        else
        {
            cout <<  number << " is not divisible by 5 and 11" << endl;

        }

        cout << "\nPress 1 to continue: \nPress 0 to exit: \nEnter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            
            break;
        }

        cout << endl;
        
        
    }while(choice == 1);

    cout << "\nThankyou user the program is over :)";

    return 0;
}
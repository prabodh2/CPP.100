#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << endl << "Enter second number: ";
    cin >> num2;
    cout << endl << "Enter third number: ";
    cin >> num3;
    if (num1 >= num2)
    {

        /*
        num1 is greater than equal to num2
        if num1 is greater than equal to num3
        num1 is the largest 
        */
        if (num1 >= num3)
        {
            cout << num1 << " is the largest " << endl;
        }

        /*
        num1 is greater than or equal to num2
        but num1 is not greater than or equal to num3
        so, num3 is the largest
        */
        else
        {
            cout << num3 << " is the largest " << endl;
        }

    /*
    else num 2 is greater than num1
    if num2 is greater than equal to num3 ----> num2 is the largest
    
    */
    }
    else 
    {
        if (num2 >= num3)
        {
            cout << num2 << " is the largest " << endl;
        }

        /*
        else num2 is greater than num1
        but num2 is not greater than or equal to num3----> num3 is the largest 
        */
        else
        {
            cout << num3 << " is the largest " << endl;

        }
    }

    return 0;

}
#include <iostream>
using namespace std;

int Sum(int number)
{
   if (number == 0)
   {
      return 0;
   }
   else
   {
      int sum = 0;\
      return sum = number + Sum(number-1);
   }
   
}

int main()
{
    int num;
    int S;
    char choice; 

    do
    {
        cout << "Enter a number: ";
        cin >> num;
        cout << "***********************************\n\n";
        S = Sum(num);
        cout << "The sum of first " << num << " is: " << S << endl;
        cout << "***********************************\n";
        cout << "Do you want to enter again? Y/N: ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            break;
        }

    } while (choice == 'y' || choice == 'Y');

    cout << "Thankyou User\nThe program is over :)";

    return 0;

    

   
}
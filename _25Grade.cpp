#include <iostream>
using namespace std;

int main()
{
    char choice;
    float marks;
    do
    {
        
        cout<< "Enter marks for Student: ";
        cin >> marks;
        cout << "****************************\n\n";
        if (marks >= 80 && marks <= 100)
        {
            if (marks >= 90)
            {
                cout << "Your grade is: A+\nEXCELLENT!!!" << endl;

            }
            else
            {
                cout << "Your grade is: A\nGREAT :)" << endl;

            }
        }
        else if(marks >= 65 && marks <80)
        {
            cout << "Your grade is: B\nVERY GOOD" << endl;

        }
        else if(marks >= 50 && marks < 65)
        {
            cout << "Your grade is: C\nAVERAGE" << endl;


        }
        else if (marks >= 35 && marks < 50)
        {
            cout << "Your grade is: D\nHARDLUCK" << endl;

        }
        else if (marks >=0 && marks < 35)
        {
            cout << "Your grade is: F\nYOU HAVE FAILED :(" << endl;

        }
        else
        {
            cout << "Please enter valid marks" << endl;
        }
        cout << "\n****************************\n";

        cout << "\nDo you want to enter for another student? Y/N: ";
        cin  >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;

        }
        

    } while (choice == 'y' || choice == 'Y');

    cout << "Thankyou user :)\nProgram is over";
    
    return 0;
}
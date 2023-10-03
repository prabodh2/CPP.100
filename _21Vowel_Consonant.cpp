#include <iostream>
#include <string>
using namespace std;

int main()
{   
    char choice;
    do
    {
        char C;
        bool IsVowel = (C == 'A' || C == 'E' || C == 'I'|| C == 'O'|| C == 'U'
                        || C == 'a' || C == 'e' || C == 'i' || C == 'o'|| C == 'u' );
        
        cout << "Enter an Alphabet: ";
        cin >> C;

        if(IsVowel)
        {
            cout << C << "is a vowel" << endl;

        }
        else if(!isalpha(C))
        {
            cout << "Invalid Input. Please Enter again" << endl;
        }
        else
        {
            cout << C << "is a consonant" << endl;

        }
        cin >> choice;
        if (choice == 'N' || choice == 'n')
        {
            break;
        }


    } while (choice == 'y' || choice == 'Y');
    
        
    

    return 0;
}


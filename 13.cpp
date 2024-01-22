#include <iostream>
using namespace std;
int main()
{
    char playagain;
    do
    {
        //user's choice
        cout<<" Choose (R)ock , (S)cissor , (P)aper : " <<endl;
        char userchoice;
        cin>>userchoice;
        //convert user's choice to uppercase
        userchoice = toupper(userchoice);
        //computer's choice
        char computerchoice;
        switch (std::rand() % 3) 
        {
            case 0:
            computerchoice = 'R';
            break;
            case 1:
            computerchoice = 'S';
            break;
            case 2:
            computerchoice = 'P';
            break;
        }
        //display userchoice
        cout<< " You Chose "<< userchoice << endl;
        cout<< " Computer Chose "<< computerchoice <<endl;

        //Determine the winner
        if (userchoice == computerchoice)
        {
            cout<<" It's a Tie " <<endl;
        }
        else if ( (userchoice=='R' && computerchoice=='S') ||
                  (userchoice=='P' && computerchoice=='R') ||
                  (userchoice=='S' && computerchoice=='P'))
                  {
                    cout<<" You Win "<<endl;
                  }
        else
        {
            cout<<" Computer Wins"<<endl;
        }
        //Ask if the user wants to play again
        cout<<" Do You Want To Play Again ? (Y/N): " <<endl;
        cin>>playagain;

    }
    while (playagain == 'Y' || playagain == 'Y');
    cout<<" Thanks for playing . Goodbye!" <<endl;
    return 0;

}

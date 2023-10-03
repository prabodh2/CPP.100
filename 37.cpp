#include <iostream>
using namespace std;
int main()
{
    int val,num;
    int sum=0;
    cout<<" Enter the Number :";
    cin>>num;
    val=num;
    while (num>0 || sum>9)
    if (num==0)
    {
        num=sum;
        sum=0;
    }
    sum+=num%10;
    num/=10;
    {
    cout<<"The sum of the digits of" <<num <<"is:" <<sum <<endl;
    }
    return 0;



}
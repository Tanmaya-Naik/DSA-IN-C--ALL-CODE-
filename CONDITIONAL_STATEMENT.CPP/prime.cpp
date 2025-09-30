#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isprime=true;
    cout<<"Enter the number you want to check prime number.";
    cin>>num;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            isprime=false;
            break;

        }
        
    }
    if(isprime==true)
    {
        cout<<"The enter number is a prime number.\n";

    }
    else
    cout<<"The enter number is not a prime number.";

    return 0;
    
}
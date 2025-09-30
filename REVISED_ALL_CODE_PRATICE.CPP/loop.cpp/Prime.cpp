#include <iostream>
using namespace std;
int main(){
    int n;
    bool isprime;
    cout<<"Enter the number upto you want to print prime number ";
    cin>>n;
    for (int i = 2; i <=n; i++) //it will start form 2 because it cant be start from 0 as in the inner loop it is 
                                //divided by 2 so eventually it will be 0 and 1 no because
                                // we know inner loop start from 2 and 1 is always smaller than 2 
    {
        isprime=true;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
             isprime=false;
             break;
            }     
        }
        if (isprime)
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int num;
    bool isprime=true;
    cout<<"Enter the number you want to check prime or not"<<endl;
    cin>>num;
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            isprime=false;
        }
    }
    if (isprime)
    {
        cout<<"Enter number is a prime number"<<endl;
        
    }
    else{
        cout<<"Enter number is not a prime number"<<endl;
    }
    return 0;

    
}
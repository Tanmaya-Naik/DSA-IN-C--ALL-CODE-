#include <iostream>
using namespace std;
int main(){
    int num;//5=5*4!
    int fact=1;
    cout<<"Enter the number you want to find factorial.\n";
    cin>>num;
    for (int i = num; i>0; i--)
    {
        fact *=i;
    }
    cout<<"The factorial of the given number is "<<fact;
    return 0;
}
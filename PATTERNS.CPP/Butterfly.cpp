#include <iostream>
using namespace std;
int main(){
    int n=10;
    for (int i = 1; i <= n; i++)//for row
    {
       for (int j = 1; j <= i; j++)//for stars
       {
        cout<<"*";
       }
       for (int j = 1; j <= 2*(n-i); j++)//for space
       {
        cout<<" ";
       }
       for (int j = 1; j <= i; j++)//for star
       {
        cout<<"*";
       }
       cout<<endl;
       
       
    }
    for (int i = n; i >=1; i--)//for row
    {
       for (int j = 1; j <= i; j++)//for stars
       {
        cout<<"*";
       }
       for (int j = 1; j <= 2*(n-i); j++)
       {
        cout<<" ";
       }
       for (int j = 1; j <= i; j++)
       {
        cout<<"*";
       }
       cout<<endl;
       
       
    }
    return 0;
}
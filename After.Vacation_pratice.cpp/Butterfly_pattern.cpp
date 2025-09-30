#include <iostream>
using namespace std;
int main(){
    int n=14;
    for (int i = 1; i <=n; i++)//upper half
    {
        for (int j = 1; j <=i; j++)// left side stars
        {
            cout<<"*";
        }
        for ( int j = 1; j <= 2*(n-i); j++)//space
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)//right side star
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    //lowerhalff
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
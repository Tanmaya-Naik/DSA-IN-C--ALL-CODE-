#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number u want to check Armstrong\n";
    cin>>num;
    int sum=0;
    int copy=num;
    int digit=log10(num)+1;
    while(copy > 0){
        int lastdig=copy%10;
        sum += pow(lastdig,digit);
        copy=copy/10;
    }
    if(num==sum){
        cout<<"You enter number is a armstrong number\n";
    }
    else{
        cout<<"You enter number is not a armstrong number\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int reverse(int n){
    int reversee=0;
    while (n>0)
    {
        int lastdig=n%10;
        reversee = (reversee*10)+lastdig;
        n=n/10;
    }
    return reversee;
}
int pallindrome(int num){
    int reverseNo= reverse(num);
    if (reverseNo==num)
    {
        cout<<"the enter number is a pallindrome";
        
    }
    else
    cout<<"the enter number is not a pallindrome";
}


int main(){
    pallindrome(555);
    return 0;
}
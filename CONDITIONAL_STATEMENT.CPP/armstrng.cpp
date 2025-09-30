// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int num=370;
    int copy=num;
    int sum=0;
    while(copy > 0){
        int lastdig=copy%10;
        int cube=lastdig*lastdig*lastdig;
        sum +=cube;
        copy=copy/10;
        
    }
    if(sum==num){
        cout<<"The enter number is a armstrong number\n";
    }
    else{
        cout<<"The enter number is not a armstrong number\n";
    }
    return 0;
}

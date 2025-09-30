#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=100;
    int divisor[num];
    int idx=0;
    for (int i = 1; i <=num; i++)
    {
        if(num%i==0){
            divisor[idx]=i;
            idx++;
        }
    }
    cout<<"Divisor of "<<num<<" are=";
    for (int i = 0; i < idx; i++)
    {
        cout<<divisor[i]<<",";
    }
    return 0;
        
}
#include <iostream>
using namespace std;
int main(){
    int num=693;
    int lastdig=0;
    int sum=0;
    while (num>0)
    {
        lastdig=num%10;
        sum+=lastdig;
        num=num/10;
        
    }
    cout<<"The sum of the given number is "<<sum<<endl;
    return 0;
}
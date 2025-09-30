#include <iostream>
using namespace std;
int main(){
    int num=153;
    int n=num;
    int lastdig;
    int cubsum=0;
    while (num>0)
    {
       lastdig=num%10;
       cubsum=cubsum+(lastdig*lastdig*lastdig);
       num=num/10;
    }
    if (cubsum==num)
    {
       cout<<"The enter number is a armstrong number";
       
    }
    else
    cout<<"The enter number is a armstrong number";
    
return 0;
        
}
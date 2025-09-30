#include <iostream>
using namespace std;
int main(){
    int num=692;
    int lastdig=0;
    int sum=0;
    while (num>0)
    {
        lastdig=num%10;
        if (lastdig%2 !=0)
        {
           sum+=lastdig;
           
        }
        
       num=num/10; 
        
    }
    cout<<"The sum of the given number is "<<sum<<endl;
    return 0;
}
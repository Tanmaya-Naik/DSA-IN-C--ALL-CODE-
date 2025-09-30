#include <iostream>
using namespace std;
void FastExpo(int x,int n){
    int ans=1;
    while (n>0)
    {
        int lastdig= n & 1;
        if (lastdig==1)
        {
           ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans;
}
int  main(){
    FastExpo(3,5);
    return 0;
}
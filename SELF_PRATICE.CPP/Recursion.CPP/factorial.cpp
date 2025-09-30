#include <iostream>
using namespace std;
int Factorial(int n){
    //base case
    if (n==0)
    {
     return 1;
    }
    return n*Factorial(n-1);
}
int main(){
    int ans=Factorial(5);
    cout<<"Factorial is:"<<ans<<endl;
    return 0;
}

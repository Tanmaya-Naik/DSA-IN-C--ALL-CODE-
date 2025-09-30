#include <iostream>
using namespace std;
int Sum(int n){
    if (n==1)
    {
       return 1;
    }
    return n+Sum(n-1);
    
}
int main(){
    int ans=Sum(5);
    cout<<ans<<endl;
    return 0;
}
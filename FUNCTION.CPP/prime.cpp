#include <iostream>
using namespace std;

    bool isprime(int n){
    if (n==1)
    {
         return false;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
        
    }
    return true;
    }
    int main(){
       cout<<isprime(1221)<<endl;;
        return 0;
    }
    
    

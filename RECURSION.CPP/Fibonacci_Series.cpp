#include <iostream>
using namespace std;
int fibo(int n){
    if (n==0||n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<fibo(6)<<endl;

    cout<<fibo(1)<<endl;
    cout<<fibo(2)<<endl;
    cout<<fibo(3)<<endl;
    cout<<fibo(4)<<endl;
    cout<<fibo(5)<<endl;
    cout<<fibo(6)<<endl;
    return 0;
}
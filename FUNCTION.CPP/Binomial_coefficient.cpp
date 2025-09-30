#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;

}
int Bionomial(int n,int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);

    int result= val1 / (val2 * val3);
    
    cout<<"The total combination is "<<result<<endl;

}
int main(){
    
    Bionomial(5,3);
    return 0;
}
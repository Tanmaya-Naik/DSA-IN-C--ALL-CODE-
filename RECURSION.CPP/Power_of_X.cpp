#include <iostream>
using namespace std;
int Pow(int x,int n){
    if (n==0)
    {
        return 1;
    }
    int HalfPower=Pow(x,n/2);
    int HalfSquare=HalfPower*HalfPower;
    if (n%2!=0)
    {
       return  x*HalfSquare;
    }
    return HalfSquare;
  }
  int main(){
    cout<<Pow(3,10);
    return 0;
  }
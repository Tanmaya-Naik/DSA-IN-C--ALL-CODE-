#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int num=14;
   bool isprime=true;
   for (int i = 2; i <= sqrt(num); i++)
   {
    if(num%i==0){
      isprime=false;
      break;
    }

   }
   if(isprime==true)
   {
    cout<<"the enter number is a prime number.\n";

   }
   else
   cout<<"the enter number is not a prime number.\n";
   return 0;
   
}
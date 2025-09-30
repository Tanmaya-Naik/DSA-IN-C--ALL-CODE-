#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number upto you want to print prime number "<<endl;
   cin>>n;
   bool isprime;
   for (int i = 2; i <= n; i++)
   {
      isprime=true;
      for (int j = 2; j <= i/2; j++)
        {
          if (i%j ==0)
        {
            isprime=false;
            break;
        }
        
      }
      if (isprime)
      {
         cout<<i<<" ";
      }
      
   }
   return 0;
}
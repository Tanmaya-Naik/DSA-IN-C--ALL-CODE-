// #include <iostream>
// #include <limits.h>
// using namespace std;
// void BestBuyingDay(int *prices,int n){
//     int Bestbuy[100000];
//      Bestbuy[0]=INT_MAX;
//      for (int i = 1; i < n; i++)
//      {
//         Bestbuy[i]=min(prices[i-1],Bestbuy[i-1]);
//      }
//      int maxProfit=0;
//      for (int i = 0; i < n; i++)
//      {
//         int currProfit=prices[i]-Bestbuy[i];
//         maxProfit=max(maxProfit,currProfit);
//      }
//      cout<<"The maximum profit will be "<<maxProfit;
     
     
// }
// int main(){
//     int prices[]={7,1,5,3,6,4};
//     int n=sizeof(prices)/sizeof(int);
//     BestBuyingDay(prices,n);
//     return 0;
    
// }
#include <iostream>
#include <limits.h>
using namespace std;
void BEstBuy(int *prices,int n){
   int Bestbuy[100000];
   Bestbuy[0]=INT_MAX;
   for (int i = 1; i < n; i++)
   {
      Bestbuy[i]=min(Bestbuy[i-1],prices[i-1]);
   }
   int maxprofit=0;
   for (int i = 0; i < n; i++)
   {
      int currprofit=prices[i]-Bestbuy[i];
      maxprofit=max(maxprofit,currprofit);
   }
   cout<<"The maximum profit will be "<<maxprofit;
}

int main(){
   int prices[]={7,6,4,3,2,1};
   int n=sizeof(prices)/sizeof(int);
   BEstBuy(prices,n);
   return 0;


}
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int BESTProfit(int *prices,int n){
    int bestbuy[10000];
    bestbuy[0]=INT_MAX;
    for (int i = 1; i < n; i++)
    {
       bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
       
    }
    int maxprofit=0;
    
    for (int i = 0; i < n; i++)
    {
        int currprofit=prices[i]-bestbuy[i];
        maxprofit=max(currprofit,maxprofit);
        
    }
    return maxprofit;
    
    
    
}
int main(){

   int prices[] = {7,1,5,3,6,4};
   int n=sizeof(prices)/sizeof(int);
   cout<<BESTProfit(prices,n);
   return 0;

}
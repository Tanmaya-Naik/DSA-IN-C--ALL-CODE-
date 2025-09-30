#include <iostream>
#include <limits.h>
using namespace std;
void Maxprofit(int *price,int n){
    int bestbuy[10000];
    bestbuy[0]=INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
    }
    int maxprofit=0;
    for (int i = 0; i < n; i++)
    {
        int currprofit=price[i]-bestbuy[i];
        maxprofit=max(currprofit,maxprofit);
    }
    cout<<"The maximum profit you can get after selling your stock is "<<maxprofit<<endl;
    
}
int main(){
    int prices[]={2,5,7,1,9,8};
    int n=sizeof(prices)/sizeof(int);
    Maxprofit(prices,n);
    return 0;
}
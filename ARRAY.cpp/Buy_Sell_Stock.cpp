#include <iostream>
#include <limits.h>
using namespace std;
void Maxprofit(int *prices,int n){
    int bestbuy[10000];
    bestbuy[0]=INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i]=min(prices[i-1],bestbuy[i-1]);
        
    }
    int maxprofit=0;
    for (int i = 0; i < n; i++)
    {
        int currProfit=prices[i]-bestbuy[i];
        maxprofit=max(currProfit,maxprofit);
    }
    cout<<"The maximum profit you can get after selling your stock is "<<maxprofit<<endl;
}  
int main(){
    int prices[]={2,5,7,1,9,8};
    int n=sizeof(prices)/sizeof(int);
    Maxprofit(prices,n);
    return 0;
}


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         stack<int> st;
//         int rowSz=matrix.size();
//         int colSz=matrix[0].size();
//         //Lets push the elemts in the stack
//         for(int i=0;i<colSz;i++){
//             for(int j=0;j<rowSz;j++){
//                 st.push(matrix[j][i]);
//             }
//         }

//         //Now when all the matrix are empty again push elemets one by one from buttom

//         for(int i=rowSz-1;i>=0;i--){
//             for(int j=0;j<colSz;j++){
//                 matrix[i][j]=st.top();
//                 st.pop();
//             }
//         }
//     }
// };
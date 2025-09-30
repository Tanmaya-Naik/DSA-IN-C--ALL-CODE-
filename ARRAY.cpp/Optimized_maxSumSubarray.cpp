// OPTIMIZED WAY OF ABOVE SAME PROGRAM--------
#include <iostream>
#include <limits.h>
using namespace std;
void SumSubArray2(int *arr,int n){
    int maxSum= INT_MIN;
    for (int start = 0; start < n; start++)
    {
       int curSum=0;
       for (int end = start; end < n; end++)
       {
         curSum += arr[end];
         maxSum=max(curSum,maxSum);
       }
       
    }
    cout<<"The maximum sum value of subarrays is "<<maxSum<<endl;
}
    int main(){
    int arr[]={2,3,5,-3,-4,6,2,4,5};
    int n=sizeof(arr)/sizeof(int);
    SumSubArray2(arr,n);
    return 0;
     }

#include <iostream>
#include <limits.h>
using namespace std;
void SumSubArray(int *arr,int n){
    int maxSum= INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum=0;
            for (int i = start; i <=end; i++)
            {
                currSum += arr[i];
            }
            cout<<currSum<<",";   
            maxSum=max(maxSum,currSum);  
            }
            cout<<endl;
       }
       cout<<"The maximum sum value of subarrays is "<<maxSum<<endl;
}
int main(){
    int arr[] = {7, -8, 6, -5, 8, -3, 4};
    int n=sizeof(arr)/sizeof(int);
    SumSubArray(arr,n);
    return 0;
     }
     



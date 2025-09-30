#include <iostream>
#include <limits.h>
using namespace std;
void SumSubarray(int *arr,int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for (int i = 0; i < n; i++)
    {
        currsum +=arr[i];
        if (currsum >maxsum)
        {
            maxsum=currsum;
        }
        if (currsum < 0)
        {
            currsum=0;
        }
        
    }
    cout<<"The maximum sum value of this subarray is: "<<maxsum;
}
int main(){
    int arr[]={2,-4,3,7,-5,8,-2,4};
    int n=sizeof(arr)/sizeof(int);
    SumSubarray(arr,n);
    return 0;
}
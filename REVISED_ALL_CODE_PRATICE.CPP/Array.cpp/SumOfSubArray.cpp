#include <iostream>
#include <limits.h>
using namespace std;
int maxsum=INT_MIN;
void SumSubarray(int arr[],int n){
    
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum=0;
            for (int i = start; i <=end; i++)
            {
                currsum +=arr[i];
            }
            cout<<currsum<<",";
             maxsum=max(currsum,maxsum);

        }
        cout<<endl;
    }
    cout<<"The maximum value from the all subarray is "<<maxsum<<endl;
}

int main(){
    int arr[]={5,2,3,-4,-5,1,-7,-4,14,12};
    int n=sizeof(arr)/sizeof(int);
    SumSubarray(arr,n);
    return 0;
    
}
#include <iostream>
#include <limits.h>
using namespace std;
void MaxSubarray(int arr[],int n){
    int MaxSum=INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum=0;
            for (int i = start; i <= end; i++)
            {
                currsum +=arr[i];
            }
            cout<<currsum<<",";
            MaxSum=max(MaxSum,currsum);
        }
        cout<<endl;
    }
    cout<<"The maximum value of this SubArray is:"<<MaxSum;
}
int main(){
    int arr[]={4,-5,-6,10,11};
    int n=sizeof(arr)/sizeof(int);
    MaxSubarray(arr,n);
    return 0;
}
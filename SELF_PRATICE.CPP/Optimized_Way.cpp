#include <iostream>
#include <limits.h>
using namespace std;
void sumsubarray(int arr[],int n){
    int Maxsum=INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum=0;
        for (int end = start; end < n; end++)
        {
            currsum += arr[end];
        }
        cout<<currsum<<",";
        Maxsum=max(currsum,Maxsum);
       cout<<endl; 
    }
    cout<<"The maximum value is :"<<Maxsum;
}
int main(){
    int arr[]={4,-5,-6,10,11};
    int n=sizeof(arr)/sizeof(int);
    sumsubarray(arr,n);
    return 0;
}
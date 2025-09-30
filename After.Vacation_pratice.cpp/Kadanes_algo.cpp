#include <iostream>
#include <limits.h>
using namespace std;
void Maxsum(int *arr,int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for (int i = 0; i < n; i++)
    {
       currsum+=arr[i];
       if (currsum>maxsum)
       {
          maxsum=currsum;
       }
       if (currsum<0)
       {
         currsum=0;
       }
       
    }
    cout<<"The maximum sum array sum is "<<maxsum;
}
int main(){
    int arr[]={-5,7,3,-14,3,9};
    int n=sizeof(arr)/sizeof(int);
    Maxsum(arr,n);
    return 0;

}
#include <iostream>
#include <limits.h>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    
    }
    cout<<endl;
}
void CountSort(int *arr,int n){
    int freq[1000]={0};
    int Minval=INT_MAX;
    int Maxval=INT_MIN;
    // 1st step
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        Minval=min(Minval,arr[i]);
        Maxval=max(Maxval,arr[i]);
    }
    
    //2nd step
    for (int i = Minval,j=0; i <=Maxval; i++)
    {
        while (freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }
    PrintArray(arr,n);

}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    CountSort(arr,n);
    return 0;
}


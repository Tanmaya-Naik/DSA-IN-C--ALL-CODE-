#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
int main(){
    int arr[]={2,4,6,8,10,12,14,18};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while (start < end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    PrintArray(arr,n);
    return 0;
    
}
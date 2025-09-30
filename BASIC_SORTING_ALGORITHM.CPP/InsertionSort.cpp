#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void InsertionSort(int *arr,int n){
    for (int i=1 ; i < n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    PrintArray(arr,n);
}
int main(){
    int arr[]={2,10,12,14,18,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    InsertionSort(arr,n);
    return 0;
    

}
#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void ReverseArray(int *arr,int *copyArray,int n){
    for (int i = 0; i < n; i++)
    {
        int j=n-i-1;
        copyArray[i]=arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=copyArray[i];
    }
    PrintArray(arr,n);

}
int main(){
    int arr[]={4,14,18,2,15,10};
    int n=sizeof(arr)/sizeof(int);
    int copyArray[n];
    ReverseArray(arr,copyArray,n);
    return 0;
}
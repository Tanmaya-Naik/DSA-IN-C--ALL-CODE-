#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void bubbleSort(int *arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    PrintArray(arr,n);
}
int main(){
    int arr[]={2,10,12,14,18,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    return 0;
    

}
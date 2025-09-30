#include <iostream>
using namespace std;
void prinArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<",";
    }
    cout<<endl;
}
void SelectionSort(int *arr,int n){
    for (int  i = 0; i < n-1; i++)
    {
        int mini=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[mini])
            {
                mini=j;
            
            }
            
        }
        swap(arr[i],arr[mini]);
    }
    prinArray(arr,n);
    
}
int main(){
int arr[]={2,10,12,14,18,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    return 0;
}
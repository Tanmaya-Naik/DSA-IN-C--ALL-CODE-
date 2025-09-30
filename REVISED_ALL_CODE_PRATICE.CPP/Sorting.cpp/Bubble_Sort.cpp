#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void BubbleSort(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        bool swapped=false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
            
        }
        if (!swapped)
            {
                break;
            }
            
    }
    PrintArray(arr,n);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    return 0;

}
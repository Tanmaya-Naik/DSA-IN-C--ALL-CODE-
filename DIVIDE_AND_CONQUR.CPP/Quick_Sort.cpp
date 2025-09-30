#include <iostream>
using namespace std;
void Printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
int partition(int arr[],int stidx,int endidx){
   
    int i=stidx-1;
    int pivot=arr[endidx];
    for ( int j =stidx ; j < endidx; j++)
    {
        if (arr[j]<=pivot)
        {
           i++;
           swap(arr[i],arr[j]);
        }
        
    }
    
    i++;
    swap(arr[i],arr[endidx]);
    //pivotidx=i

    return i;
}
void QuickSort(int arr[],int stidx,int endidx){
    if (stidx>=endidx)
    {
        return;
    }
    int pivotIdx=partition(arr,stidx,endidx);
    QuickSort(arr,stidx,pivotIdx-1);
    QuickSort(arr,pivotIdx+1,endidx);
    
}
int main(){
    int arr[]={3,5,2,6,7,1,8,9,4};
    int n=sizeof(arr)/sizeof(int);
    QuickSort(arr,0,n-1);
    Printarray(arr,n);
    return 0;
}
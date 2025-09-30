#include <iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
   
}
int Partition(int arr[],int stidx,int endidx){
    int i=stidx-1;
    int pivot=arr[endidx];
    for (int j = stidx; j < endidx; j++)
    {
        if (arr[j]<=pivot)
        {
           i++;
           swap(arr[i],arr[j]);
        }
        
    }
    i++;
    swap(arr[i],arr[endidx]);
    return i;
}
void QuickSort(int arr[],int stidx,int endidx){
        if (stidx>=endidx)
        {
            return;
        }
        int PivotIdx=Partition(arr,stidx,endidx);
        QuickSort(arr,stidx,PivotIdx-1);//left
        QuickSort(arr,PivotIdx+1,endidx);//right

}
int main(){
    int arr[]={2,4,3,5,8,9,7,6,1};
    int n=sizeof(arr)/sizeof(int);
    QuickSort(arr,0,n-1);
    PrintArray(arr,n);
    return 0;
}
    
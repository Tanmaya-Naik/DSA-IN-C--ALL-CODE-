#include <iostream>
#include <vector>
using namespace std;
void Merge(int arr[],int stidx,int endidx,int mid){
    vector<int> temp;
    int i=stidx;
    int j=mid+1;
    while (i<=mid && j<=endidx)
    {
       if (arr[i]<=arr[j])
       {
        temp.push_back(arr[i++]);
       }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while (i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j<=endidx)
    {
        temp.push_back(arr[j++]);
    }
    //vector--->original
    for (int idx=stidx,x= 0; idx <=endidx ; idx++)
    {
        arr[idx]=temp[x++];
    }
}
void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void Merge_Sort(int arr[],int stidx,int endidx){
    if (stidx>=endidx)
    {
        return;
    }
    int mid=stidx+(endidx-stidx)/2;
    Merge_Sort(arr,stidx,mid);
    Merge_Sort(arr,mid+1,endidx);
    Merge(arr,stidx,endidx,mid);

}
int main(){
    int arr[]={4,3,6,7,2,1,9,8,5};
    int n=sizeof(arr)/sizeof(int);
    Merge_Sort(arr,0,n-1);
    PrintArray(arr,n);
    return 0;

}


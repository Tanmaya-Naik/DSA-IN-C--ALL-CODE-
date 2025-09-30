#include <iostream>
#include <vector>
using namespace std;
int Merge(int arr[],int stIdx,int endIdx,int mid){
    vector<int> temp;
    int i=stIdx;
    int j=mid+1;
    while (i<=mid && j<=endIdx)
    {
        if (arr[i]<=arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j<=endIdx)
    {
        temp.push_back(arr[j++]);
    }
    
    //vector to original
    for (int idx = stIdx,x=0; idx <=endIdx; idx++)
    {
        arr[idx]=temp[x++];
    }
    
    
}
void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    
}
void MergeSort(int arr[],int stIdx,int endIdx){
    if (stIdx>=endIdx)//Base case
    {
        return;
    }
    int mid=(stIdx+endIdx)/2;//another way to right this= st+(end-st)/2;
    MergeSort(arr,stIdx,mid);//left
    MergeSort(arr,mid+1,endIdx);//right
    Merge(arr,stIdx,endIdx,mid);

    
    
    
}
int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;
    MergeSort(arr,0,n-1);
    PrintArray(arr,n);
    return 0;
}
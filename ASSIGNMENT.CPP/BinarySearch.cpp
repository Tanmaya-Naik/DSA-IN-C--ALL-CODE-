#include <iostream>
using namespace std;
int BinarySearch(int arr[],int stIdx,int endIdx,int key){
    //base case
    if (stIdx>endIdx)
    {
        return -1;
    }
    int mid=(stIdx+endIdx)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if (arr[mid]>key)
    {
       return BinarySearch(arr,stIdx,mid-1,key);
       
    }
    else if (arr[mid]<key)
    {
      return BinarySearch(arr,mid+1,endIdx,key);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int key=5;
    int n=7;
    int stIdx=0;
    int endIdx=n-1;
    cout<<BinarySearch(arr,stIdx,endIdx,key);
    return 0;
}
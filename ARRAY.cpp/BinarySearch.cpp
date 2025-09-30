#include <iostream>
using namespace std;
int BinarySearch(int *arr,int n,int key){
    int start=0,end=n-1;
    while (start <= end)
    {
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
           return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        
        
    }
    return -1;
}
int main(){
    int arr[]={5,7,9,10,13,14,18,28,36};
    int n=sizeof(arr)/sizeof(int);
    int key=18;
    cout<<BinarySearch(arr,n,key);
    return 0;
}
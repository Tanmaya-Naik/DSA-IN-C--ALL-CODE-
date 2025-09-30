#include <iostream>
using namespace std;
int Binary_SEarch(int arr[],int n){
    int start=0,end=n-1;
    int key=23;
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
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n=sizeof(arr)/sizeof(int);
    cout<<Binary_SEarch(arr,n);
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
void Reverse(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);
    Reverse(arr,start+1,end-1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=sizeof(arr)/sizeof(int);
    int start=0,end=sz-1;
    Reverse(arr,start,end);
    for(int i=0;i<=sz-1;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
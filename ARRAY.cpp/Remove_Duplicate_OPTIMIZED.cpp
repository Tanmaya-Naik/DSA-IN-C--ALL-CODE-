#include <bits/stdc++.h>
using namespace std;
int Duplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,2,3,4,4,4,5,5,6,7,7,7,7};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<Duplicate(arr,n);
    return 0;
}

//REMEMBER THIS PATTERN BRO U NEED THIS IN MOVE ZERO TO THE LAST QUESTION   
#include <iostream>
using namespace std;
void allOccurance(int arr[],int n,int key,int i){
    if (i==n)
    {
        return;
    }
    if (arr[i]==key)
    {
        cout<<i<<endl;
    }
    else{
    allOccurance(arr,n,key,i+1);
    }
    // allOccurance(arr,n,key,i+1);
}
int main(){
    int arr[]={1,2,3,4,3,5,3,7,3,3};
    int n=sizeof(arr)/sizeof(int);
    int key=3;
    allOccurance(arr,n,key,0);
    return 0;
}
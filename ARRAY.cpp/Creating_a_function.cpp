#include <iostream>
using namespace std;
void printArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[]={2,5,6,7,14,18};
    int n=sizeof(arr)/sizeof(int);
    printArray(arr,n);
    return 0;
}
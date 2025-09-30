#include <iostream>
using namespace std;
int LinearSEarch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    
    
}
int main(){
    int arr[]={2,4,5,14,18,43};
    int key=18;
    int n=sizeof(arr)/sizeof(int);
    cout<<LinearSEarch(arr,n,14);
    return 0;
}
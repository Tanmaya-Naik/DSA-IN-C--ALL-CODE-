#include <iostream>
using namespace std;
int LinearSearch(int *arr,int n,int key){
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int n=5;
    int arr[]={1,7,34,14,18};
    int key=18;
    cout<<LinearSearch(arr,n,key)<<endl;;
    return 0;
    
}
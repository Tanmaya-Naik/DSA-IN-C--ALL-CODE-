#include <iostream>
using namespace std;
void Subarray(int *arr,int n){
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
    
}
int main(){
    int arr[]={8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    Subarray(arr,n);
    return 0;
}
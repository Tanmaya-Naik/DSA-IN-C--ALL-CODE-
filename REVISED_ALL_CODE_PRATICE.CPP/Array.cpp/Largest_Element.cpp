#include <iostream>
using namespace std;
int main(){
    int arr[]={2,1,4,7,3,66,18,14};
    int n=sizeof(arr)/sizeof(int);
    int biggest=arr[0];
    for (int i = 1; i < n ; i++)
    {
        if (arr[i]>biggest)
        {
            biggest=arr[i];
        }
        
        
    }
    cout<<"The biggest element in the array is "<<biggest<<endl;
    return 0;
}
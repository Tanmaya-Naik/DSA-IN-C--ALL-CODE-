#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(int);
    
    int largest=arr[0];
    int secondlarge=arr[0];
    if(n==0 || n==1){
        return -1;
    }
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<largest && arr[i]>secondlarge){
            secondlarge=arr[i];
        }
    }
    cout<<"The largest element of the array is "<<largest<<endl;
    cout<<"The second largest element of the array is "<<secondlarge<<endl;
    return 0;
    
}
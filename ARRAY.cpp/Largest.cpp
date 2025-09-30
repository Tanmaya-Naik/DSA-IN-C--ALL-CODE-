#include <iostream> 
using namespace std;
int main(){
    int arr[]={2,5,6,8,3,1,15,14,18};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
           max=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
        
    }
    cout<<"Largest="<<max<<endl;
    cout<<"Minimum="<<min<<endl;
    return 0;
}


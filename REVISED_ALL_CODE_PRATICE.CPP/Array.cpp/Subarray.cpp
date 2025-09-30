// #include <iostream>
// using namespace std;
// void PrintSubArray(int arr[],int n){
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start; end < n; end++)
//         {
//             for (int i = start; i <= end; i++)
//             {
//                 cout<<arr[i];
//             }
//             cout<<",";

//         }
//         cout<<endl;
//     } 
    
// }
// int main(){
//     int arr[]={1,3,5,7,9};
//     int n=sizeof(arr)/sizeof(int);
//     PrintSubArray(arr,n);
//     return 0;
    
// }


















#include <iostream>
#include <limits.h>
using namespace std;
int maxsum=INT_MIN;
// void PrintArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<",";
//     }
    
// }
void Subarray(int arr[],int n){
    int currsum;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            currsum=0;
            for (int i = start; i <= end; i++)
            {
                currsum+=arr[i];
            }
            cout<<currsum<<",";
            maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<"The maximum value of the subarray is="<<maxsum<<endl;
}
int main(){
    int arr[]={1,2,-3,-4,-5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    Subarray(arr,n);
    return 0;
}
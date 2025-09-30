// #include <iostream>
// #include <limits.h>
// using namespace std;

// void maxsumm(int *arr,int n){
//     int maxsum=INT_MIN;
//     int currrsum=0;
//     for (int i = 0; i <n; i++)
//     {
//         currrsum+=arr[i];
//     if (currrsum > maxsum)
//     {
//         maxsum=currrsum;
//     }
//     if (currrsum<0)
//     {
//         currrsum=0;
//     }
//     }
//     cout<<"The maximum value of this subarray is "<<maxsum;
// }
// int main(){
//     int arr[]={5,2,3,-4,-5,1,-7,-4,14,12};
//     int n=sizeof(arr)/sizeof(int);
//     maxsumm(arr,n);
//     return 0;

// }
#include <iostream>
#include <limits.h>
using namespace std;
void MaxsumSubarray(int *arr,int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for (int i = 0; i < n; i++)
    {
        currsum+=arr[i];
        if (currsum>maxsum)
        {
           maxsum=currsum;
        }
        if (currsum<0)
        {
            currsum=0;
        }
    }
    cout<<"The maximum sum value of subarray is "<<maxsum;
}
int main(){
    int arr[]={2,3,5,-3,-4,6,2,4,5};
    int n=sizeof(arr)/sizeof(int);
    MaxsumSubarray(arr,n);
    return 0;

}
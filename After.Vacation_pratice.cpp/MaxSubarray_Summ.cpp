// //Bruteforce method
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void Maxsum(int *arr,int n){
//     int Maxsumm=INT_MIN;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start; end < n; end++)
//         {
//             int currsum=0;
//             for (int i = start; i <= end; i++)
//             {
//                 currsum+=arr[i];
//                 cout<<" ";
//             }
//             cout<<currsum;
//             Maxsumm=max(Maxsumm,currsum);
//         }
//         cout<<endl;
//     }
//     cout<<"The maximum sum array sum is "<<Maxsumm ;
// }
// int main(){
//     int arr[]={-5,7,3,-14,3,8};
//     int n=sizeof(arr)/sizeof(int);
//     Maxsum(arr,n);
//     return 0;

// }
//Optimized method
#include <iostream>
#include <limits.h>
using namespace std;
void Maxsum(int *arr,int n){
    int Maxsumm=INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum=0;
        for (int end = start; end < n; end++)
        {
            currsum+=arr[end];
        }
            cout<<currsum;
            Maxsumm=max(Maxsumm,currsum);
        
        cout<<endl;
    }
    cout<<"The maximum sum array sum is "<<Maxsumm ;
}
int main(){
    int arr[]={-5,7,3,-14,3,8};
    int n=sizeof(arr)/sizeof(int);
    Maxsum(arr,n);
    return 0;

}
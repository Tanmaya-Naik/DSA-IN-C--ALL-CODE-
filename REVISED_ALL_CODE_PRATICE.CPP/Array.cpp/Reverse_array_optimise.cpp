// #include <iostream>
// using namespace std;
// void PrintArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[]={2,3,4,5,6,7,8,9,10,95,14,18,13};
//     int n=sizeof(arr)/sizeof(int);
// //     int start=0 ,end=n-1;
//     while (start < end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     PrintArray(arr,n);
//     return 0;
// }
//Summary--In this optimise way to write the reverse array code you need to use to use
// a fuction which is already there in c++ language and you need to initialize start and end
//  in the main function the you start a while loop which run from start to n-1 and then use the
//   swap function to swap to first value of the array to the last of the array and so on
//    and then update the start and decrese the end 
#include <iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<",";
    }
    
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9,10,95,14,18,13};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while (start <end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
    PrintArray(arr,n);
    return 0;
}
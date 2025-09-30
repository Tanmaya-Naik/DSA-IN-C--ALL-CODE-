
#include <iostream>
using namespace std;
void PrintArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void Selection_sort(int *arr,int n){
    for (int i = 0; i <n ; i++)
    {
        int minidx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minidx])
            {
                minidx=j;
            }
            
        }
        swap(arr[i],arr[minidx]);
    }
    PrintArray(arr,n);
}
int main(){
    int arr[]={7,4,9,2,8,1,3,5};
    int n=sizeof(arr)/sizeof(int);
    Selection_sort(arr,n);
    return 0;


}

/*
 Dry Run:
1. The selection sort algorithm iterates through the array multiple times.
2. In each iteration, it selects the smallest element from the unsorted part of the array and 
swaps it with the first element of the unsorted part.
3. For the given input array {7, 4, 9, 2, 8, 1, 3, 5}, the iterations proceed as follows:
   - Iteration 1: {1, 4, 9, 2, 8, 7, 3, 5}
   - Iteration 2: {1, 2, 9, 4, 8, 7, 3, 5}
   - Iteration 3: {1, 2, 3, 4, 8, 7, 9, 5}
   - Iteration 4: {1, 2, 3, 4, 8, 7, 9, 5} (no change)
   - Iteration 5: {1, 2, 3, 4, 5, 7, 9, 8}
   - Iteration 6: {1, 2, 3, 4, 5, 7, 9, 8} (no change)
   - Iteration 7: {1, 2, 3, 4, 5, 7, 8, 9}
   - Iteration 8: {1, 2, 3, 4, 5, 7, 8, 9} (no further changes needed)
4. The final sorted array is: {1, 2, 3, 4, 5, 7, 8, 9}.
*/

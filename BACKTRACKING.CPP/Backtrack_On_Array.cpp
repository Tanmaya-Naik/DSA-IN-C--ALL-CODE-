// #include <iostream>
// using namespace std;
// void PrintArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
    
// }
// void changeInArr(int arr[],int n,int i){
//     if (i==n)
//     {
//         PrintArray(arr,n);
//         return;
//     }
//     arr[i]=i+1;
//     changeInArr(arr,n,i+1);
//     arr[i]-=2;//Backtrack   
// }
// int main(){
//     int arr[]={0};
//     changeInArr(arr,7,0);
//     PrintArray(arr,7);
//     return 0;
// }


#include <iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void changeArray(int arr[],int n,int i){
    //Base case 
    if (i==n)
    {
        PrintArray(arr,n);//This will print inside the base case 
        return;
    }
    arr[i]=i+1;
    changeArray(arr,n,i+1);
    arr[i] -= 2;//This will work only when the recursion part that is the upper part function is over means {1,2,3,4,5}
}
int main(){
    int arr[]={0};
    changeArray(arr,5,0);
    PrintArray(arr,5);//This will print in the main function
    return 0;
}
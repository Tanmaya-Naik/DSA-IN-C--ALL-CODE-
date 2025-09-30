// #include <bits/stdc++.h>
// using namespace std;
// bool sort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for (int j = i+1; j < n ; j++)
//         {
//             if(arr[j]<arr[i]){
//                return false;
//             }
//         }
        
//     }
//     return true;

// }
// int main(){
//     int arr[]={1,5,9,14,18};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<sort(arr,n);
    
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
    
}
int main(){
    int arr[]={1,5,9,14,18};
    int n=sizeof(arr)/sizeof(int);
    bool ans=sorted(arr,n);
    cout<<ans<<endl;
    
    return 0;
}
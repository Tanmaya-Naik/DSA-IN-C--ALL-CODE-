//HERE WE USE A NEW DATA STRUCTURE WHOSE NAME IS SET-Its work is that it only allow unique value to be store in it
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,4,4,5,5,5,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before removing the Duplicate THE ARRAY LOOKS LIKE"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int idx=0;
    for(auto it: st){
        arr[idx]=it;
        idx++;
    }
    cout<<"After removing the Duplicate THE ARRAY LOOKS LIKE"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }

    return 0;

}
//THE SET FOR LOOP RUNS IN LOGARITMIC TC=N LOG N
//AND THE OTHER LOOP O(N)

//SC=0(N)
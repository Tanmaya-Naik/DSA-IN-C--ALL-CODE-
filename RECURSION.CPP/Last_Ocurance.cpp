#include <iostream>
#include <vector>
using namespace std;
int lastoccur(vector<int> arr,int i,int target){
    if (i==arr.size())
    {
        return -1;
    }
    
    int idx=lastoccur(arr,i+1,target);
    if (idx==-1)
    {
       if (arr[i]==target)
       {
        return i;
       }
       
    }
    return idx;
    
}

int main(){
    vector<int> arr={2,4,6,6,5,3,5}; 
    cout<<lastoccur(arr,0,5);
    return 0;
}
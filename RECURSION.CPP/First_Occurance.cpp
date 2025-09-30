#include <iostream>
#include <vector>
using namespace std;
int firstoccur(vector<int> arr,int i,int target){
    if (i==arr.size())
    {
        return -1;
    }
    
    if (arr[i]==target)
    {
        return i;
    }
    return firstoccur(arr,i+1,target);
}
int main(){
    vector<int> arr={2,4,6,5,6,5,3,5,5}; 
    cout<<firstoccur(arr,0,5);
    return 0;
}
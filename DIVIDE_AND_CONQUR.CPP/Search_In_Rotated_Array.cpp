#include <iostream>
using namespace std;
int Search(int arr[],int stidx,int endidx,int target){
    if (stidx>endidx)
    {
       return -1;
    }
    int mid=stidx+(endidx-stidx)/2;
    if (arr[mid]==target)
    {
        return mid;
    }
    
    if (arr[stidx]<=arr[mid])//mid is present in Line 1.[4,5,6,7]
    {
        if (arr[stidx]<=target&& target<=arr[mid])//check if target is present at left side of mid
        {
           return Search(arr,stidx,mid-1,target);
        }
        else{//if the target is large than arr[stidx]than the target is present in right side of the mid
           return Search(arr,mid+1,endidx,target);
        }
    }
    else//that means mid is present in Line 2. [0,1,2]
    {
           if (arr[mid]<=target&& target<=arr[endidx])
           {
           return Search(arr,mid+1,endidx,target);
           }
           else
           {
           return Search(arr,stidx,mid-1,target);
           }
    }
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<Search(arr,0,n-1,7)<<endl;
    return 0;
}
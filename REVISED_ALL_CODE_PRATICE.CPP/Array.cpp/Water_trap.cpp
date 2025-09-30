#include <iostream>
#include <limits.h>
using namespace std;
int WAterTrapped(int *heights,int n){
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for (int i = 1; i < n; i++)
    {
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
        // cout<<leftmax[i]<<",";
    }
    for (int i = n-2; i >=0; i--)
    {
        rightmax[i]=max(rightmax[i+1],heights[i+1]);

    }
    int watertrapped=0;
    for (int i = 0; i <n; i++)
    {
        int currwater=min(leftmax[i],rightmax[i])-heights[i];
        if (currwater>0)
        {
            watertrapped+=currwater;
        }
        
    }
    return watertrapped;
}
int main(){
    int heights[]={4,3,2,0,6,5,7,3};
    int n=sizeof(heights)/sizeof(int);
    cout<<WAterTrapped(heights,n)<<"is the total rain water trapped ";
    return 0;
}

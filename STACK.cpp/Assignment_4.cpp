//Tanmaya listen this is the esiest question for you so if you open your notebook or chatgpt once then you loss and you always be a looser you accept it or not

#include <iostream>
#include <vector>
using namespace std;

void Trapped_Water(vector<int> height,int n){
    int leftMax[20000];
    leftMax[0]=height[0];
    for (int i = 1; i < n; i++)
    {
       leftMax[i]=max(leftMax[i-1],height[i-1]);
    }

    int rightMax[20000];
    rightMax[n-1]=height[n-1];
    for (int i = n-2; i >= 0 ; i--)
    {
        rightMax[i]=max(rightMax[i+1],height[i+1]);
    }
    

    int trappedWater=0;
    for (int i = 0; i < n; i++)
    {
        int currWAter=min(leftMax[i],rightMax[i]);
        currWAter = currWAter-height[i];
        if (currWAter > 0)
        {
            trappedWater +=currWAter;
        }
    }
    cout<<"The total water trapped in the vally is="<<trappedWater;
    
}
int main(){
    vector<int> height ={7,0,4,2,5,0,6,4,0,5};
    int n=height.size();
    Trapped_Water(height,n);
    return 0;
}   
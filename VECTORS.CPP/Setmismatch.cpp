#include <iostream>
#include <vector>
using namespace std;
vector<int> findMissing(vector<int>&nums){
    vector<int> ans;
    int n=nums.size();
    vector<bool>ispresent(n+1,false);
    for (int i = 0; i < n; i++)
    {
        if (ispresent[nums[i]])
        {
            ans.push_back(nums[i]);
        }
        ispresent[nums[i]]=true;
    }
    
}
int main(){
    vector<int> nums={1,2,2,4};

}

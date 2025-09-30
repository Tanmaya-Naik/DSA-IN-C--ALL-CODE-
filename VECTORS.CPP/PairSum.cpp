#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int>arr,int target){
    int st=0,end=arr.size()-1;
    int currsum=0;
    vector<int> ans;
    while (st<end)
    {
        currsum=arr[st]+arr[end];
        if (currsum==target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }else if (currsum>target)
        {
            end--;//becuse we need to lower the value of end so total is low
        }else{
        st++;
        }
    }
    return ans;
}
int main(){
    vector<int> vec={2,7,11,15};
    int target=26;
    vector<int> ans=pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}
//THE ARRAY SHOULD BE IN SORTED ORDER AND ANSWER ALWAYS EXISTS
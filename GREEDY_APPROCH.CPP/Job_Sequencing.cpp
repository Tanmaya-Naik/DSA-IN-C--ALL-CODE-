#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
        p1.second > p2.second;
   }
int MaxProfit(vector<pair<int,int>> Jobs){
    int n=Jobs.size();
    sort(Jobs.begin(),Jobs.end(),compare);
    int profit=Jobs[0].second;
    int SafeDeadline=2;
    for (int i = 0; i < n; i++)
    {
        if (Jobs[i].first > SafeDeadline)
        {
           profit+=Jobs[i].second;
           SafeDeadline++;
        }
        
    }
    cout<<"Maximum profit is "<<profit<<endl;
    return profit;
}
int main(){
    vector<pair<int,int>> Jobs={{4,20},{1,10},{1,40},{4,20}};
    MaxProfit(Jobs);
    return 0;

}

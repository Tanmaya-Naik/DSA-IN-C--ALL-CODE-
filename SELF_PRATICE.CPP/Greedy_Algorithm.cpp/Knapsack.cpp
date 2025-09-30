#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<double,int> p1,pair<double,int> p2){
    return p1.first > p2.first;//sort in decending order according to ratios
}
int FractionalKnapsack(vector<int> value,vector<int> weight,int Totalcapacity){
    int n=value.size();
    double ans=0.0;
    vector<pair<double,int>> ratios(n,make_pair(0.0,0));
    for (int i = 0; i < n; i++)
    {
        double r=value[i]/(double)weight[i];
        ratios[i]=make_pair(r,i);
    }
    sort(ratios.begin(),ratios.end(),compare);

    for (int i = 0; i < n; i++)
    {
        int idx=ratios[i].second;
        if (weight[idx] <= Totalcapacity)
        {
           ans+=value[idx];
           Totalcapacity-=weight[idx];
        }
        else{// if this loop is going to execute that means this is the last step after that the knapsack get full and totalcapcity=0 and then break the loop
            ans+=(ratios[i].first) * Totalcapacity;
            Totalcapacity=0;
            break;
        }
    }
    cout<<"The maximum value obtain "<<ans<<endl;
    return ans;

}
int main(){
    vector<int> value={120,150,100,80,200};
    vector<int> weight={10,20,15,5,20};
    int Totalcapacity=30;
    FractionalKnapsack(value,weight,Totalcapacity);
    return 0;
}
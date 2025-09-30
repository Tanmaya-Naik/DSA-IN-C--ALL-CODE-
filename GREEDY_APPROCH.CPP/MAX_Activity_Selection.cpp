#include <iostream>
#include <vector>
using namespace std;

int MaxActivity(vector<int> start,vector<int> end){
    int count=1;
    cout<<"Selecting Activity A0\n";
    int currEndTime=end[0];
    for(int i=1;i<start.size();i++){
        if (start[i] >= currEndTime)
        {
            cout<<"Selecting Activity A"<<i<<endl;
            count++;
            currEndTime=end[i];
        }
        
    }
    return count;
}

int main(){
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    cout<<MaxActivity(start,end)<<endl;
    return 0;
}
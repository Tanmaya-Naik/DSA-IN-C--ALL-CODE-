#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A={1,2,3};
    vector<int> B={3,2,1};

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int AbsoluteDiff=0;
    for (int i = 0; i < A.size(); i++)
    {
        AbsoluteDiff += abs(A[i]-B[i]);
    }
    
    cout<<"Minimum Absolute differnce is "<<AbsoluteDiff<<endl;
    return 0;


}
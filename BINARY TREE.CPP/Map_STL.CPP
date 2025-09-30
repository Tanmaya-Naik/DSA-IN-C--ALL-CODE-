#include <bits\stdc++.h>
using namespace std;
int main(){
    map<int,string> m;     //int will be the KEY which store Roll no and String store VALUE =NAME
    m[14]="Jyotirmaya";
    m[15]="Tanmaya";
    m[18]="Shubhrata";
    m[19]="Tanmaya";
    m[15]="Shubhmaya";

    cout<<m[18]<<endl;
    cout<<m[19]<<endl;
    cout<<m[15]<<endl;
    cout<<m.count(14)<<endl;
    cout<<m.count(10)<<endl;
    cout<<m.count(18)<<endl;
    for(auto it:m){
        cout<<"Key= "<<it.first<<","<<"Value= "<<it.second<<endl;
    }
    
    return 0;
}
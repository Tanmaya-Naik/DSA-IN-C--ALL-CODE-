#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+ sum(n-1);
}
int main(){
    int n=15;
    cout<<sum(n)<<endl;
    return 0;

}
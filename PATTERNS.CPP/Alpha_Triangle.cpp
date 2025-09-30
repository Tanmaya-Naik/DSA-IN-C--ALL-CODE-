#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<=n;i++){
        for(char ch=('A'+n);ch>=('A'+n)-i;ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

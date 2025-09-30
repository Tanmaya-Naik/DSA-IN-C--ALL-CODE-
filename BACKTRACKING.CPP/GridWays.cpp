#include <iostream>
#include <vector>
#include <string>
using namespace std;
int GridWays(int r,int c,int n,int m){
    if (r==n-1 && c==m-1)
    {
        return 1;
    }
    if (r>=n||c>=m)
    {
       return 0;
    }
    //Right
    int val1=GridWays(r,c+1,n,m);

    //Down
    int val2=GridWays(r+1,c,n,m);

    return val1+val2;
}
int main(){
    int n=3;
    int m=3;
    cout<<GridWays(0,0,n,m)<<endl;
    return 0;
}


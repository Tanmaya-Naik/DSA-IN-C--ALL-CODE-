#include <iostream>
using namespace std;
int Tiling(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    //Vertical
    int ans1=Tiling(n-1);
    //Horizontal
    int ans2=Tiling(n-2);
    return ans1+ans2;
}
int main(){
    int ans3=Tiling(10);
    cout<<ans3<<endl;
    return 0;
}
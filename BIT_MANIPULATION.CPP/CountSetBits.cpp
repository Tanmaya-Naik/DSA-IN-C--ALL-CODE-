#include <iostream>
using namespace std;
int CountSetBits(int num){
    int count=0;
    while (num)
    {
        int lastdig=num & 1;
        count += lastdig;
        num=num>>1;
    }
    cout<<count<<endl;
    return count;
}
int main(){
    CountSetBits(15);
    return 0;
}
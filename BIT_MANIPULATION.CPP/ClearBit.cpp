#include <iostream>
using namespace std;
int clearbit(int num,int i){
    int bitmask=~(1<<i);
    return (num&bitmask);
}
int main(){
    cout<<clearbit(6,1);
    return 0;
}
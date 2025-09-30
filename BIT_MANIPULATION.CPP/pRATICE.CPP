#include <iostream>
using namespace std;
void updateIthbit(int num,int i,int val){
    num= num &~(1<<i);
    num= num|(val<<i);
    cout<<num<<endl;
}
int main(){
    updateIthbit(7,2,1);
    return 0;
}
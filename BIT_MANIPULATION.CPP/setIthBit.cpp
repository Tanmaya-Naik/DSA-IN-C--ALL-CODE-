#include <iostream>
using namespace std;
int SetithBIt(int num,int i){
    int bitmask=1<<i;
    return (num|bitmask);

}
int main(){
    cout<<SetithBIt(6,3);
    return 0;
}
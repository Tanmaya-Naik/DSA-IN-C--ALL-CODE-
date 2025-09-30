#include <iostream>
using namespace std;
//We take the bitmask num-1 because if we perform the AND operation of
// num and num-1 the result will be zero.
bool CheckPower(int num){
    int bitmast=num-1;
    if (!(num&(num-1)))
    {
       return true;
       
    }
    else
    return false;
}
int main(){
    cout<<CheckPower(8);
    return 0;
}

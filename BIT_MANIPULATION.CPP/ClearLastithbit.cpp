#include <iostream>
using namespace std;
void ClearLastbit(int num,int i){
    int bitmask=(~0)<<i;
    cout<<(num&bitmask);
}
int main(){
  ClearLastbit(15,2);
  return 0;
}
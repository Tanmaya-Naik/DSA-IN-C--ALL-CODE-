#include <iostream>
using namespace std;
int Getbit(int num,int i){
    int bitmask=1<<i;
    if (!(num&bitmask))
    {
        return 0;
    }
    else{
        return 1;
    }
    
}
int main(){
    cout<<Getbit(7,1);
    return 0;
}
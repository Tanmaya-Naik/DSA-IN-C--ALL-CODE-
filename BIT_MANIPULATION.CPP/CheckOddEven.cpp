#include <iostream>
using namespace std;
void OddEven (int n){
    if (!(n&1))
    {
        cout<<"This is a even number"<<endl;;

    }
    else
    cout<<"This is a odd number"<<endl;;
    
}
int main(){
    OddEven(5);
    OddEven(8);
    OddEven(16);
    OddEven(53);
    return 0;

}
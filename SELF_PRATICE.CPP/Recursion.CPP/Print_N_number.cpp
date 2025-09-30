#include <iostream>
using namespace std;
void Decending(int n){
    if (n==1)
    {
        return;
    }
    cout<<n<<endl;
     Decending(n-1);
}
int main(){
    Decending(18);
    return 0;
}
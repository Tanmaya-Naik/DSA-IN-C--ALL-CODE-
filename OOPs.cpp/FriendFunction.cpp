#include <iostream>
#include <string>
using namespace std;
class A{
   string Secret="Himansh love Subhu";
};
class B{
    public:
    void showsecrete(A obj){
        cout<<obj.Secret<<endl;
    }
};
void revealSecret(A obj){
    cout<<obj.Secret;
}
int main(){
    A a1;
    B b1;
    b1.showsecrete(a1);
    revealSecret(a1);
    return 0;
}


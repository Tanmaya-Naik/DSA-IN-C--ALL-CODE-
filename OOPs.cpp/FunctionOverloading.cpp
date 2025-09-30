#include <iostream>
#include <string>
using namespace std;
class over{
    public:
    void show(int x){
        cout<<x<<endl;
    }
    int show(string str){
        cout<<str<<endl;
    }
};
int main(){
    over f1;
    f1.show(18);
    f1.show("Shubhmaya");
    return 0;

}
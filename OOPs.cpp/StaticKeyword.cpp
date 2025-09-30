#include <iostream>
using namespace std;
class example {
    public:
     example(){
        cout<<"constructor is calling..."<<endl;
     }
     ~example(){
        cout<<"destructor is calling..."<<endl;
     }
};
int main(){
    int i=0;
    if (i==0)
    {
       static example e1;
    }
    cout<<"how are you\n";
    return 0;
}
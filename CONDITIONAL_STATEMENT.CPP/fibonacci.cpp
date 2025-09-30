#include <iostream>
using namespace std;
int main(){
    int num=10;
    int first=0;
    int second=1;
    int third;
    cout<<first<<" "<<second<<" ";
    for (int i = 2; i < num; i++)
    {
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;

    }
    cout<<endl;
    return 0;
    
}
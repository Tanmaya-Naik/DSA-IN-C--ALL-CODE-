#include <iostream>
using namespace std;
int main(){
    int num=10;
    int first=0;
    int second=1;
    cout<<first<<" ";
    cout<<second<<" ";
    int third;
    for (int i = 0; i <= num; i++)
    {
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    return 0;
}
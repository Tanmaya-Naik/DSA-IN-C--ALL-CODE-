#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number upto you want to print multiplication table "<<endl;
    cin>>num;
    for (int i = 1; i <=num ; i++)
    {
        for (int j = 1; j <=10; j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }
    return 0;
}

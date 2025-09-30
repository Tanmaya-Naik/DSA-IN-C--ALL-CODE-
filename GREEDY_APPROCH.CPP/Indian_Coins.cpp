#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> Coins={1,2,5,10,20,50,100,500,2000};
    int Value=1814;
    int temp=Value;
    int n=Coins.size();
    int ans=0;
    for (int i = n; i >=0 && Value > 0 ; i--)
    {
        if (Value >= Coins[i])
        {
            ans += Value/Coins[i];  //From this condition we can know how many coins[i] is required to pay Value
            Value=Value% Coins[i]; //From this we can get the reminder of that value after paying
        }
        
    }
    cout<<"The total Coins we need to use to pay Value "<<temp<<" is "<<ans<<endl;
    return 0;
}
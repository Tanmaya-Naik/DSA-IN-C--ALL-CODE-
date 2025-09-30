#include <iostream>
using namespace std;
int FriendPair(int n){
    if (n==1||n==2)
    {
        return n;
    }
   //single
   int single=FriendPair(n-1);
   //pair
   int pair=(n-1)*FriendPair(n-2);
   return single+pair;
    
}
int main(){
    cout<<FriendPair(4);
    return 0;
}
//What is lower Bound?
//Lower bound is the smallest index where the arr[ind]>=target   //So basically the first index which value is grater or equal to target is the lower bound


#include <bits\stdc++.h>
using namespace std;
int main(){
    int N = 5;
    int arr[] = {3,5,8,15,19};
    int target=119;
    for(int i=0;i<N-1;i++){
        if(arr[i]>=target){
           cout<<i<<endl;
           return 0;
        }
    }
    cout<<"There is no lower bound so "<<-1<<endl;
    return 0;
}

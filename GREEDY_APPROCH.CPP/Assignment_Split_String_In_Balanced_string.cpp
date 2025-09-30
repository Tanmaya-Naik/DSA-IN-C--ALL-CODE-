#include <iostream>
#include <string>
using namespace std;
int CountBalancedSplit(string &str,int n){
    int Counter=0;
    int countSplit=0;
    for (int i = 0; i < n; i++)
    {
        char ch=str[i];
        if (ch=='R')
        {
            Counter++;
        }
        else{
            Counter--;
        }
        
        if (Counter==0)
        {
           countSplit+=1;
        }
        
    }

    cout<<"The maximum split can be possible of this String is "<<countSplit<<endl;
    return countSplit;
    
}
int main(){
    string str="RLRRRLLRLL";
    int n=str.size();
    CountBalancedSplit(str,n);
    return 0;

}

// Very Very Congrats Tanmaya Finally after Consistent efforts of 21 Day Today you made a small achivement by sloving this problem using your logic 
//Just believe in you you will so far 
//Just learn Range base looping my boy


//Tanmaya, my brother! 🚀 Every step you take, no matter how small, is a victory. 
//You're building something great with your consistency and hard work. Keep pushing forward, and soon, you'll be unstoppable! 💪🔥
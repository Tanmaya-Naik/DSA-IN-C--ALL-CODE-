#include <iostream>
#include <string>
using namespace std;
void BinaryString(int n,int prevplace,string ans){
    if (n==0)
    {
       cout<<ans<<endl;
       return;//IT TERMINATE THE PROGRAM ONCE IT COMPLETE AND STOP FURTHER EXECUTION
       //SIMPLY THIS RETURN END THE PROGRAM EARLY.
    }
    if (prevplace!=1)
    {
        BinaryString(n-1,0,ans+'0');
        BinaryString(n-1,1,ans+'1');
    }
    else{
        BinaryString(n-1,0,ans+'0');
    }
}
int main(){
    string ans="";
    BinaryString(6,0,ans);
    return 0;
}
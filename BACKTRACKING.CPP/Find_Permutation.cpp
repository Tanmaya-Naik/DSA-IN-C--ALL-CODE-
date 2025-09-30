#include <iostream>
#include <string>
using namespace std;
void PrintPermutation(string str,string ans){
    int n=str.size();
    if (n==0)
    {
       cout<<ans<<endl;
       return;
    }
    for (int i = 0; i < n; i++)//to have a choice
    {
        char ch=str[i];
        string nextstr=str.substr(0,i)+str.substr(i+1,n-i-1);//n-i-1 because we take the 
                                                             //letter present right after 
                                                             //the i is consider as the 1st latter
        PrintPermutation(nextstr,ans+ch);//because we remove the ch in nextstr so we add the ch

    }
}
int main(){
    string str="abc";
    string ans="";
    PrintPermutation(str,ans);
    return 0;
}
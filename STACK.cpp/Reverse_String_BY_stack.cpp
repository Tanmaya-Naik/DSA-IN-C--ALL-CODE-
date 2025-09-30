#include <iostream>
#include <string>
#include <stack>
using namespace std;

string Reverse(string str){
    string ans;
    stack<char> s;
    
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
        
    }

    while (!s.empty())
    {
        char Top=s.top();
        ans+=Top;
        s.pop();

    }
    
    return ans;
}
int main(){
    string str="uoyevoliayamnaT";
    cout<<"Reverse="<<Reverse(str)<<endl;

    return 0;
    
}
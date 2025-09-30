#include <iostream>
#include <stack>
using namespace std;

void Push_At_buttom(stack<int> &s,int value){
    if (s.empty())
    {
        s.push(value);
        return;
    }
    
    int temp=s.top();
    s.pop();
    Push_At_buttom(s,value);
    s.push(temp);
    
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    
    Push_At_buttom(s,4);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
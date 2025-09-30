#include <iostream>
#include <stack>
using namespace std;

void PushAtButtom(stack<int> &s,int val){
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    PushAtButtom(s,val);
    s.push(temp);
}
void REverse(stack<int> &s){
    if (s.empty())
    {
        return;
    }
    
    int temp1=s.top();
    s.pop();
    REverse(s);
    PushAtButtom(s,temp1);
}
void printStack(stack<int> s){
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);
    REverse(s);
    printStack(s);
    return 0;
}
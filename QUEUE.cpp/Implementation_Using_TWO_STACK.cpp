#include <iostream>
// #include <queue>
#include <stack>
using namespace std;

class Queue{
    //Create two stack-
    stack<int> s1;
    stack<int> s2;

public:
  void Push(int data){
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(data);

    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    
    
  }

 void pop(){
    s1.pop();
 }
 
int front(){
    return s1.top();
}
    
bool isempty(){
    return s1.empty();
}
};

int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);
    q.Push(4);
    q.Push(4);
    

    while (!q.isempty())
    {
       cout<<q.front()<<" ";
       q.pop();
    }
    return 0;
}
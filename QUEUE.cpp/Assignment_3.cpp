#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void REverse(queue<int> &q,int k){
    
    if (k>q.size() || k<=0)
    {
        cout<<"Invalid Queue"<<endl;
    }
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
       q.push(s.top());
       s.pop();
    }

    int remaining=q.size()-k;
    for (int i = 0; i < remaining; i++)
    {
        q.push(q.front());
        q.pop();
    }
    
    
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    // Using while loop (works perfectly)
    cout << "Using while loop:" << endl;
    queue<int> q1 = q; // Create a copy to preserve the original queue
    while (!q1.empty()) {
        cout << q1.front() << endl;
        q1.pop();
    }

    int k=5;

  
    REverse(q,k);
    cout<<"This is the reverse one tanu"<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    

    return 0;
}

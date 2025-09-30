#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
       data=val;
       next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }

void push(int val){
    Node* newNode=new Node(val);
    if (head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}

void pop(){
    Node* temp=head;
    head=head->next;
    delete temp;
}

int front(){
    return head->data;
}

bool isempty(){
    return head==NULL;
}
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.isempty())
    {
        cout<<q.front()<<",";
        q.pop();
    }
    cout<<endl;
    return 0;
}
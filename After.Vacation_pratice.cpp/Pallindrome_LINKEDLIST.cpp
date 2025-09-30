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

class List{
public:
   Node* head;
   Node* tail;

   List(){
    head=NULL;
    tail=NULL;
   }

void Push_front(int val){
    Node* newNode=new Node(val);
    if (head==NULL)
    {
        head=tail=newNode;
    }
    else{
    newNode->next=head;
    head=newNode;
    }
}
void Push_back(int val){
    Node* newNode=new Node(val);
    if (head==NULL)
    {
        head=tail=newNode;
    }
    else{
    tail->next=newNode;
    tail=newNode;
    }
}
void PrintList(){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
   Node* Reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        //Updation
        prev=curr;
        curr=next;
    }
    return prev;  //newhead means head=prev
   }

   bool isPallindrome(){
    if (head == NULL || head->next == NULL) {
            return true;
        }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    //store the slow so that you can reverse from that node
    Node* rightHead=Reverse(slow);
    Node* temp1=head;
    Node* temp2=rightHead;
    while (temp2 != NULL)
    {
        if(temp1->data != temp2->data)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
     return true;
  }
    
};

int main(){
    List myList;
    myList.Push_back(1);
    myList.Push_back(4);
    myList.Push_back(4);
    myList.Push_back(8);

    //Print original List
    myList.PrintList();
    

    if (myList.isPallindrome()==true)
    {
        cout<<"The given number is a Pallindrome number."<<endl;
    }
    else{
        cout<<"The given number is not a Pallindrome number."<<endl;

    }
    

    return 0;
}
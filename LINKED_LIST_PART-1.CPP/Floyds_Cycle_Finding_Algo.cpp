#include <iostream>
using namespace std;

// Node class representing each element in the linked list
class Node {
public:
    int data;      // Data held by the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class to manage the list and its operations
class List {

    public:
    Node* head; // Pointer to the first node (head) of the list
    Node* tail; // Pointer to the last node (tail) of the list


    // Constructor to initialize an empty list
    List() {
        head = NULL;
        tail = NULL;
    }

    // 1. Function to add a node at the front of the list
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) { // If the list is empty
            head = tail = newNode;
        } else { // Add the new node at the front
            newNode->next = head;
            head = newNode;
        }
    }

    // 2. Function to add a node at the end of the list
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) { // If the list is empty
            head = tail = newNode;
        } else { // Add the new node at the end
            tail->next = newNode;
            tail = newNode;
        }
    }

   
};
 // 3. Function to print the entire list
    void printList(Node* head) {//function to
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

// 4.DETECT CYCLE EXITS OR NOT
bool isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while (fast != NULL&&fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if (slow==fast)
        {
            cout<<"Cycle exits\n";
            return true;
        }
        
    }
    cout<<"Cycle does not exits";
    return false;
}
//5.REMOVE CYCLE FROM LINKED LIST
void removeCycle(Node* head){
    //1st step-Dectect the cylce
    Node* slow=head;
    Node* fast=head;
    bool iscycle=false;
    while (fast!=NULL && fast->next!= NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if (slow==fast)
        {
            cout<<"Cycle is present\n ";
            iscycle=true;
            break;
        }
        
    }
    if (iscycle==false)
    {
       cout<<"Cycle is not present\n ";
       return;
    }
    

    //2nd step
    slow=head;
    if (slow==fast)//This is the special case that already means before making slow=head slow and fast are in same
    {
        while (fast->next!=slow)
        {
            fast=fast->next;
        }
        fast->next=NULL;
    }
    else{
        Node* prev;
        while (slow!=fast)
        {
        slow=slow->next;
        prev=fast;
        fast=fast->next;

        }
       prev->next=NULL;//We remove the cycle
    }
    
}
//18-FROM HERE MERGE SORT IN LINKED LIST CODE STARTED
//1st- We have to Split the linked list in two half
Node* SplitAtMid(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    while (fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if (prev!=NULL)
    {
       prev->next=NULL;
    }
    return slow;//slow=righthead na so we return slow pointer
    
}
Node* Merge(Node* left,Node* right){
    List ans;
    Node* i=left;
    Node* j=right;
    while (i!=NULL&&j!=NULL)//while loop for merging the two linked list
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i=i->next;
        }
        else{
            ans.push_back(j->data);
            j=j->next;
        }
    }
    while (i!=NULL)  
    {
        ans.push_back(i->data);
        i=i->next;
    }
    while (j!=NULL)  
    {
        ans.push_back(j->data);
        j=j->next;
    }
    
    return ans.head;
    
}
Node* mergeSort(Node* head){
    if (head==NULL || head->next==NULL) //when only one element is there 
    {
        return head;
    }
    Node* rightHead= SplitAtMid(head); //we split the linked list in two half
    Node* left=mergeSort(head);
    Node* right=mergeSort(rightHead);

    return Merge(left,right);

}
//This is a part of zig-zag question
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while (curr!=NULL)
    {
        next=curr->next;//assign next
        curr->next=prev;//break the link

        prev=curr;
        curr=next;
    }
    // head=prev;

    return prev;

}
Node* ZigZag(Node* head){
    Node* rightHead=SplitAtMid(head);
    Node* rightHeadprev=reverse(rightHead);

    //Alternate merging
    Node* left=head;
    Node* right=rightHeadprev;
    Node* tail=right;
    while (left!=NULL && right!=NULL)
    {
        Node* leftnext=left->next;
        Node* rightnext=right->next;

        left->next=right;
        right->next=leftnext;
        tail=right;

        left=leftnext;
        right=rightnext;
    }
    if(right!=NULL)//for odd no of element at right side
    {
    tail->next=right;
    }
    return head;
}

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.printList(); // Expected: 1->2->3->4->5->NULL

    ll.push_back(6);
    ll.push_back(7);
    printList(ll.head); // Expected: 1->2->3->4->5->6->7->NULL
    ll.head=ZigZag(ll.head);
    printList(ll.head);

    // List ll;
    // ll.push_front(5);
    // ll.push_front(86);
    // ll.push_front(17);
    // ll.push_front(38);
    // ll.push_front(99);
    // ll.push_front(9);
    // ll.push_front(19);
    // //  ll. tail->next=ll.head;
    // // //1->2->3->4->5->1
    
    // // removeCycle(ll.head);
    // //1->2->3->4->5->NULL
    // printList(ll.head);
    // ll.head=mergeSort(ll.head);
    // printList(ll.head);
    return 0;
}



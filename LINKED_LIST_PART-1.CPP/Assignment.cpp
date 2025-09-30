//                                            //1st Question
// #include <iostream>
// #include <list>
// using namespace std;
// void reverse(list<int>::iterator head,list<int>& myList){
//     cout<<"This is reverse function"<<endl;
//     for (auto it = head; it != myList.end(); it++)
//     {
//         cout<<*it<<","<<endl;
//     }
//     myList.reverse();

//     cout<<"After reversing the linked list-->\n";
//     for (auto it = head; it != myList.end(); i++)
//     {
//         cout<<*it<<","<<endl;
//     }
    
// }

// int main() {
//     list<int> myList = {10,20,20,10};
//     auto head = myList.begin(); // 'head' points to the start of the list

//     // Accessing the head
//     cout << "Head: " << *head <<endl;
//     reverse(head,myList);
//     if (myL)
//     {
//         /* code */
//     }
    
    

//     return 0;
// }
//                                    //2-THIS IS FOR LEET CODE
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if (!head || !head->next) return true; // Empty or single-node list is a palindrome
        
//         // Step 1: Find the middle of the linked list
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // Step 2: Reverse the second half of the list
//         ListNode* prev = nullptr;
//         ListNode* curr = slow;
//         while (curr) {
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }

//         // Step 3: Compare the first half and the reversed second half
//         ListNode* left = head;
//         ListNode* right = prev; // Start of the reversed second half
//         while (right) { // Compare until the end of the reversed half
//             if (left->val != right->val) {
//                 return false; // Mismatch found
//             }
//             left = left->next;
//             right = right->next;
//         }

//         return true; // Palindrome
//     }
// };

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
    //initialize
    List(){
        head=NULL;
        tail=NULL;
    }
    //function for push_front
    void push_front(int val){
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
    void push_back(int val){
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
      void printList(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    Node* reverse(Node* head){
      Node* prev=NULL;
      Node* curr=head;
      Node* next;
      while (curr!=NULL)
      {
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
      }
      return prev;

    }
    bool ispallindrome(){
        if (head == NULL || head->next == NULL) {
            return true;
        }
        Node* slow=head;
        Node* fast=head;
        while (fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* righthead=reverse(slow);
        Node* temp1=head;
        Node* temp2=righthead;
        while (temp2!= NULL)
        {
            if(temp1->data != temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return true;
    }
};
    int main(){
        List mylist;
        mylist.push_back(2);
        mylist.push_back(1);
        mylist.push_back(1);
        mylist.push_back(2);
        cout<<"Original List \n";
        mylist.printList();
        cout<<endl;
        //pallindrome
        if (mylist.ispallindrome()==true)
        {
            cout<<"This given number is a pallindrome";
            
        }
        else{
            cout<<"This given number is not a pallindrome";
        }
        return 0;
    }


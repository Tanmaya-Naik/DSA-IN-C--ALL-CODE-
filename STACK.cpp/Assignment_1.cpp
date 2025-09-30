// //Given the head of a singly linked list, return true if it is a Palindrome or false otherwise.
// // Examples : Input: head = [1,2,2,1] Output: true

// #include <iostream>
// #include <stack>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };

//  bool isPallindrome(Node* head){
//     stack<int> s;
//     Node* temp=head;

//     //Traverse the List and store all the element in the stack
//     while (temp)
//     {
//        s.push(temp->data);
//        temp=temp->next;
//     }

//     //again traverse and check
//     temp=head;
//     while (temp)
//     {
//         if (temp->data != s.top())
//         {
//             return false; //not match means not a pallindrome number
//         }
//         else{
//         s.pop();
//         temp=temp->next;
//         }
//     }
    
//     return true;
    
//  }

// int main(){
//     Node* head=new Node(1);
//     Node* second=new Node(2);
//     Node* third=new Node(2);
//     Node* fourth=new Node(3);

//     head->next=second;
//     second->next=third;
//     third->next=fourth;


//     fourth->next=NULL;
    
//     if (isPallindrome(head))
//     {
//        cout<<"The given list is pallindrome."<<endl;
//     }
//     else{
//        cout<<"The given list is not pallindrome."<<endl;

//     }
//     return 0;
// }
        // This is the best optimized solution 
#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

bool isPalindrome(Node* head) {
    if (!head || !head->next) return true; // Single node or empty list is a palindrome

    stack<int> s;
    Node* slow = head;
    Node* fast = head;

    // Step 1: Use slow and fast pointers to find the middle of the list
    while (fast && fast->next) {
        s.push(slow->data); // Push the first half of the elements onto the stack
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: If the list has an odd number of elements, skip the middle element
    if (fast) {
        slow = slow->next;
    }

    // Step 3: Compare the second half of the list with the stack
    while (slow) {
        if (slow->data != s.top()) {
            return false; // Mismatch found
        }
        s.pop();
        slow = slow->next;
    }

    return true; // All elements matched
}

int main() {
    // Creating the linked list
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;

    if (isPalindrome(head)) {
        cout << "The given list is a palindrome." << endl;
    } else {
        cout << "The given list is not a palindrome." << endl;
    }

    // Free allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}

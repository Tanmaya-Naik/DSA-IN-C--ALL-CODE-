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
void printList(Node* head){
   Node* temp=head;
    
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
int main(){
    //Creating a NOde 
    Node* head=new Node(8);
    Node* second=new Node(18);
    Node* third=new Node(28);
    Node* fourth=new Node(38);
    Node* fifth=new Node(48);
    Node* sixth=new Node(58);
    Node* seven=new Node(68);
    Node* eight=new Node(78);
    Node* nine=new Node(88);
    Node* ten=new Node(98);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seven;
    seven->next=eight;


    eight->next=nine;
    nine->next=ten;
    ten->next=NULL;
    

    //ORIGINAL LIST
    printList(head);

    
    int M=2;//Number of node retain
    int N=2;//Nmber of node delete after retaintation
    Node* current=head;
    while (current!=NULL)
    {
        for(int i=1;i < M && current!= NULL;i++ ){
            current=current->next;
        }
        if (current == NULL)
        {
            break;
        }
        Node* deletecurrent=current->next;
        for (int i = 0; i < N && deletecurrent!= NULL  ; i++)
        {
            Node* temp1=deletecurrent;//WE NEED TO DELETE THIS NODE. SO WE NEED TO POINT THIS NODE SO THAT WE CAN DELETE EASILY
            deletecurrent=deletecurrent->next;
            delete temp1;
        }
        
        current->next=deletecurrent;

        current=deletecurrent;
    }

    cout << "Updated List: ";
    printList(head);

    return 0;
    
}
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     // Creating Nodes
//     Node* head = new Node(8);
//     Node* second = new Node(18);
//     Node* third = new Node(28);
//     Node* fourth = new Node(38);
//     Node* fifth = new Node(48);
//     Node* sixth = new Node(58);
//     Node* seven = new Node(68);
//     Node* eight = new Node(78);

//     // Linking Nodes
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seven;
//     seven->next = eight;

//     // Original List
//     cout << "Original List: ";
//     printList(head);

//     int M = 2; // Number of nodes to retain
//     int N = 2; // Number of nodes to delete

//     Node* current = head;
//     while (current != NULL) {
//         // Retain M nodes
//         for (int i = 0; i < M && current != NULL; i++) {
//             current = current->next;
//         }

//         if (current == NULL) {
//             break;
//         }

//         // Start deletion from current->next
//         Node* deletecurrent = current->next;
//         for (int i = 0; i < N && deletecurrent != NULL; i++) {
//             Node* temp1 = deletecurrent;
//             deletecurrent = deletecurrent->next;
//             delete temp1; // Delete node
//         }

//         // Connect retained node to the next valid node after deletion
//         current->next = deletecurrent;

//         // Move current to the next retained node (the first node after the deleted part)
//         current = deletecurrent;
//     }

//     // Updated List
//     cout << "Updated List: ";===
//     printList(head);

//     return 0;
// }

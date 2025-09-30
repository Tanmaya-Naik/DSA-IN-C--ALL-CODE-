// #include <iostream>
// #include <cstdlib>  // For abs()
// using namespace std;

// class Node {
// public:
//     int data;        // Data part of the node
//     Node* next;      // Pointer to the next node

//     // Constructor
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// int main() {
//     // Step 1: Create the first list
//     Node* head = new Node(1); // First node with value 1
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(6);
//     Node* five = new Node(7);

//     // Link the nodes
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = five;
//     five->next = NULL;

//     // Print the first list to verify
//     Node* temp = head;
//     int count = 0;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         count++;
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
//     cout << "The size of the linked list is=" << count << endl;

//     // Step 2: Create the second list
//     Node* head2 = new Node(4);
//     Node* second2 = new Node(5);
//     Node* third2 = new Node(7);

//     head2->next = second2;
//     second2->next = third2;
//     third2->next = NULL;
     

//      //Manually create intersection
//      third2->next = five;
//     // Print the second list to verify
//     Node* temp2 = head2;
//     int count2 = 0;
//     while (temp2 != NULL) {
//         cout << temp2->data << " -> ";
//         count2++;
//         temp2 = temp2->next;
//     }
//     cout << "NULL" << endl;
//     cout << "The size of the linked list is=" << count2 << endl;

//     // Find the absolute difference between the list lengths
//     int absDifference = abs(count - count2);
//     cout << "Absolute difference between large list and short list is=" << absDifference << endl;

//     // Adjust the longer list to match the shorter list
//     Node* temp1 = head;
//     Node* temp2_copy = head2;

//     // Move the pointer of the longer list forward by the difference in length
//     if (count > count2) {
//         for (int i = 0; i < absDifference; i++) {
//             if (temp1 == NULL) {
//                 cout << "List became empty after skipping nodes!" << endl;
//                 break;
//             }
//             temp1 = temp1->next;
//         }
//     } else {
//         for (int i = 0; i < absDifference; i++) {
//             if (temp2_copy == NULL) {
//                 cout << "List became empty after skipping nodes!" << endl;
//                 break;
//             }
//             temp2_copy = temp2_copy->next;
//         }
//     }

//     // Now, compare both lists for intersection
//     bool intersectionFound = false;
//     while (temp1 != NULL && temp2_copy != NULL) {
//         if (temp1 == temp2_copy) {  // Check if both nodes are the same (intersection)
//             cout << "The value of the intersection point is = " << temp1->data << endl;
//             intersectionFound = true;
//             break;
//         }
//         temp1 = temp1->next;
//         temp2_copy = temp2_copy->next;
//     }

//     if (!intersectionFound) {
//         cout << "No intersection point found." << endl;
//     }

//     return 0;
// }

                                     //PRATICE WITH OTHER VALUES---->
#include <iostream>
#include <cstdlib>
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
int main(){
    //CREATE THE FIRST LIST
    Node* head1=new Node(1);


    Node* second1=new Node(2);
    Node* third1=new Node(3);
    Node* fourth1=new Node(4);
    Node* fifth1=new Node(5);
    Node* six1=new Node(6);

    head1->next=second1;
    second1->next=third1;
    third1->next=fourth1;
    fourth1->next=fifth1;
    fifth1->next=six1;

    six1->next=NULL;

   //PRINTING THE LIST
    Node* temp1=head1;
    int count=0;
    while (temp1!=NULL)
    {
        cout<<temp1->data<<"->";
        count+=1;
        temp1=temp1->next;
    }
    cout<<"NULL"<<endl;
    cout<<"The size of the first linked list is-"<<count<<endl;

    //CREATING THE SECOND LIST
    Node* head2=new Node(9);


    Node* second2=new Node(8);
    Node* third2=new Node(4);
    Node* fourth2=new Node(5);
    Node* fifth2=new Node(6);
    

    head2->next=second2;
    second2->next=third2;
    third2->next=fourth2;
    fourth2->next=fifth2;


      third2->next=fifth1;

    

   //PRINTING THE LIST
    Node* temp2=head2;
    int count2=0;
    while (temp2!=NULL)
    {
        cout<<temp2->data<<"->";
        count2+=1;
        temp2=temp2->next;
    }
    cout<<"NULL"<<endl;
    cout<<"The size of the first linked list is-"<<count2<<endl;

    //Lets calculate the abs differnce
    int absDifference=abs(count-count2);
    cout<<"The absolute difference between two list is="<<absDifference<<endl;
    Node* temp=head1;
    Node* temp2_copy=head2;
    if (count > count2)
    {
        for (int i = 0; i < absDifference; i++)
        {
            if (temp==NULL)
            {
                cout<<"The list became empty after skipping  node\n";
                break;
            }
            temp=temp->next;
        }
        
        
    }
    else{
          for (int i = 0; i < absDifference; i++)
        {
            if (temp2_copy==NULL)
            {
                cout<<"The list became empty after skipping  node\n";
                break;
            }
            temp2_copy=temp2_copy->next;
        }
    }
    bool INtersectionFound=false;
    while (temp !=NULL && temp2_copy !=NULL)
    {
        if (temp==temp2_copy)
        {
            cout<<"The intersection node is found ."<<temp->data<<"is the value present at intersection point"<<endl;
            INtersectionFound=true;
            break;
        }
        temp=temp->next;
        temp2_copy=temp2_copy->next;
    }
    if (!INtersectionFound)
    {
       cout<<"The intersection node is not  found ."<<endl;
    }
    
    return 0;
}
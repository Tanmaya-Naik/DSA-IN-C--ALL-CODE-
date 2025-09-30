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
    Node* head; // Pointer to the first node (head) of the list
    Node* tail; // Pointer to the last node (tail) of the list

public:
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

    // 3. Function to print the entire list
    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 4. Function to insert a node at a specific position
    void insert(int val, int pos) {
        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) { // If the position is invalid
                cout << "Invalid position!" << endl;
                return;
            }
            temp = temp->next;
        }
        // Insert the node at the specified position
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // 5. Function to remove the first node from the list
    void pop_front() {
        if (head == NULL) { // If the list is empty
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head; // Store the current head
        head = head->next; // Move the head to the next node
        delete temp;       // Delete the old head
    }

    // 6. Function to remove the last node from the list
    void pop_back() {
        if (head == NULL) { // If the list is empty
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) { // Traverse to the second last node
            temp = temp->next;
        }
        delete tail;      // Delete the last node
        tail = temp;      // Update the tail pointer
        tail->next = NULL;
    }

    // 7. Function to search for a key (iteratively)
    int Searchltr(int key) {
        Node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                return idx; // Return the index if key is found
                
            }
            temp = temp->next;
            idx++;
        }
        return -1; // Return -1 if key is not found
    }

    // Helper function for recursive search
    int helper(Node* temp, int key) {
        if (temp == NULL) {
            return -1; // Key not found
        }
        if (temp->data == key) {
            return 0; // Key found at the current node
        }
        int idx = helper(temp->next, key);
        if (idx == -1) {
            return -1; // Propagate not-found result
        }
        return idx + 1; // Return the index with offset
    }

    // 8. Function to search for a key (recursively)
    int SearchRec(int key) {
        return helper(head, key);
    }

    // 9. Function to reverse the linked list
    void reverse() {
        Node* curr = head;
        Node* prev = NULL;
        Node* next;
        while (curr != NULL) {
            next = curr->next;   // Store the next node
            curr->next = prev;  // Reverse the link
            prev = curr;        // Move prev to the current node
            curr = next;        // Move curr to the next node
        }
        head = prev; // Update the head pointer
    }

    // 10. Function to calculate the size of the list
    int getSize() { 
        int sz = 0;
        Node* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    // 11. Function to remove the Nth node from the end of the list
    void remove_Nth(int n) {
        int size = getSize(); // Get the size of the list

        // Boundary checks
        if (n <= 0 || n > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        // Special case: Remove the head node
        if (n == size) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Traverse to the node just before the target node
        Node* prev = head;
        for (int i = 1; i < (size - n); i++) {
            prev = prev->next;
        }

        Node* todel = prev->next;
        prev->next = prev->next->next; // Bypass the node
        delete todel; // Free memory
    }
};

// Main function to test the LinkedList class
int main() {
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); // Expected: 1->2->3->4->5->NULL

    ll.push_back(6);
    ll.push_back(7);
    ll.printList(); // Expected: 1->2->3->4->5->6->7->NULL

    ll.insert(118, 3);
    ll.printList(); // Expected: 1->2->118->3->4->5->6->7->NULL

    ll.reverse();
    ll.printList(); // Expected: 7->6->5->4->3->118->2->1->NULL

    ll.remove_Nth(3);
    ll.printList(); // Expected: 7->6->5->4->118->2->1->NULL

    return 0;
}

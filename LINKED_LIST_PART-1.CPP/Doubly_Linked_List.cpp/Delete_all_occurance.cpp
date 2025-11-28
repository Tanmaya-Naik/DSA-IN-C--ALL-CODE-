#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Convert vector to doubly linked list
Node* convertoDLL(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}

// Remove ALL occurrences of key
Node* removeOccurance(Node* head, int key) {
    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == key) {
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;

            // Case 1: deleting head
            if (temp == head) {
                head = nextNode;
                if (head) head->prev = NULL;
            }
            // Case 2: deleting middle or last node
            else {
                if (prevNode) prevNode->next = nextNode;
                if (nextNode) nextNode->prev = prevNode;
            }

            delete temp;  // free memory
            temp = nextNode; // move ahead
        } 
        else {
            temp = temp->next;
        }
    }

    return head;
}

// Print DLL
void printDLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {18, 14, 8, 9, 14, 18, 45, 69, 18};

    Node *Head = convertoDLL(arr);

    cout << "Original DLL: ";
    printDLL(Head);

    int key = 18;  // key to delete

    Head = removeOccurance(Head, key);

    cout << "After removing " << key << ": ";
    printDLL(Head);

    return 0;
}

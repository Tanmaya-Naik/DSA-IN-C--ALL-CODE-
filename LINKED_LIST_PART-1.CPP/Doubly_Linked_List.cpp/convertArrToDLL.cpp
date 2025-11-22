#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertoDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "(";
        if (head->prev)
            cout << head->prev->data;
        else
            cout << "NULL";
        cout << ") -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

Node *deletionOfHEAD(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    prev->next = nullptr;
    head->prev = nullptr;
    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *back = tail->prev;
    back->next = nullptr;
    tail->prev = nullptr;
    delete tail;
    return head;
}

Node *deleteKThnode(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;
    int cnt = 1;

    while (temp != NULL && cnt < k)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL)
        return head;

    Node *back = temp->prev;
    Node *front = temp->next;

    if (back == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (back == NULL)
    {
        return deletionOfHEAD(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }

    back->next = front;
    front->prev = back;

    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;

    return head;
}

int main()
{
    vector<int> arr = {18, 14, 8, 9, 1418, 45, 69, 188};
    Node *Head = convertoDLL(arr);

    // Head = deletionOfHEAD(Head);
    // Head = deleteTail(Head);
    Head = deleteKThnode(Head, 5);

    printDLL(Head);

    return 0;
}

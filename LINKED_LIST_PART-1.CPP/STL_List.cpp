#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// Function to print the list
void printList(list<int> ll) {
    list<int>::iterator itr;
    for (itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
}

int main() {
    list<int> ll;

    // Adding elements to the list
    ll.push_front(3); // Adds 3 at the beginning
    ll.push_front(2); // Adds 2 at the beginning
    ll.push_front(1); // Adds 1 at the beginning
    ll.push_back(4);  // Adds 4 at the end
    ll.push_back(5);  // Adds 5 at the end

    // Print the list
    cout << "Original List: ";
    printList(ll);

    // Display size, head, and tail
    cout << "Size: " << ll.size() << endl;
    cout << "Head: " << ll.front() << endl;
    cout << "Tail: " << ll.back() << endl;

    // Remove elements from the front and back
    ll.pop_back();  // Removes the last element
    ll.pop_front(); // Removes the first element

    cout << "After pop operations: ";
    printList(ll);

    // Using insert to add an element at a specific position
    list<int>::iterator it = ll.begin(); // Iterator pointing to the beginning
    advance(it, 2);                      // Move iterator to the 3rd position (0-based index 2)
    ll.insert(it, 10);                   // Insert 10 at the 3rd position

    cout << "After inserting 10 at 3rd position: ";
    printList(ll);

    // Using insert to add multiple elements
    ll.insert(it, 2, 20); // Insert two copies of 20 at the iterator position
    cout << "After inserting two 20s: ";
    printList(ll);
    cout<<endl;
    cout<<"THANK YOU FOR VISITING MY CODE SEE YOU AGAIN!!!!"; 
    return 0;
}

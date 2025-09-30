#include <iostream>
#include <list> // for std::list
using namespace std;

int main()
{
    // Initializing a list with some values
    list<int> myList = {10, 20, 30, 40, 50};

    // Printing the original list
    cout << "Original list: ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Using the 1st syntax: insert a single element
    list<int>::iterator it = myList.begin(); // Iterator pointing to the beginning
    advance(it, 2);                          // Move iterator to 3rd position (0-based index 2)
    myList.insert(it, 25);                   // Insert 25 at the 3rd position

    cout << "After inserting a single element (25): ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Using the 2nd syntax: insert multiple elements (n copies of a value)
    advance(it, 1);           // Move iterator to the 4th position
    myList.insert(it, 3, 15); // Insert three occurrences of 15 starting from the 4th position

    cout << "After inserting multiple elements (3 copies of 15): ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Using the 3rd syntax: insert a range of elements
    list<int> rangeList = {60, 70, 80}; // Another list with values to insert
    it = myList.begin();               // Reset iterator to the beginning
    advance(it, 5);                    // Move iterator to the 6th position
    myList.insert(it, rangeList.begin(), rangeList.end()); // Insert range from rangeList

    cout << "After inserting a range of elements (60, 70, 80): ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Using the 4th syntax: insert from an initializer list
    it = myList.end();                 // Set iterator to the end of the list
    myList.insert(it, {90, 100, 110}); // Insert elements from an initializer list at the end

    cout << "After inserting elements from an initializer list (90, 100, 110): ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool Duplicate(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Start j from i + 1 to avoid comparing the same element
            if (arr[i] == arr[j]) {
                return true;  // Return true if a duplicate is found
            }
        }
    }
    return false;  // Return false if no duplicates are found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    if (Duplicate(arr, n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}

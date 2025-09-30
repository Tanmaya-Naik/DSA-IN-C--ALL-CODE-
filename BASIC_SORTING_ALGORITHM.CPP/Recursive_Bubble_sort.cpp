#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble(int arr[], int n, int i) {
    if(n == 1) {
        return;
    }

    if(i < n - 1 && arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
    }

    if(i < n - 1) {  // ✅ Continue till i == n-1
        bubble(arr, n, i + 1);
    } else {
        bubble(arr, n - 1, 0);  // ✅ Reduce size after one full pass
    }
}

int main() {
    int arr[] = {4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    bubble(arr, n, 0);  // ✅ Sort array
    printArray(arr, n); // ✅ Print only once after sorting

    return 0;
}

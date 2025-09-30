#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void Find_Next_greater(vector<int> Value, vector<int> &Ans) {
    stack<int> s;
    int size = Ans.size();

    for (int i = size - 1; i >= 0; i--) {
        int currpos = Value[i];

        // Remove elements from the stack that are less than or equal to the current element
        while (!s.empty() && currpos >= s.top()) {
            s.pop();
        }

        // If the stack is empty, no greater element exists; otherwise, take the top
        if (s.empty()) {
            Ans[i] = -1;
        } else {
            Ans[i] = s.top();
        }

        // Push the current element onto the stack
        s.push(currpos);
    }

    // Print the result
    for (int i = 0; i < Ans.size(); i++) {
        cout << Ans[i] << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> Value = {1, 9, 4, 0, 2, 8, 1, 3};
    vector<int> Ans(Value.size(), 0); // Initialize with zeros
    Find_Next_greater(Value, Ans);
    return 0;
}

//TIME COMPLEXITY IS=O(n) and n is intial value of vectoe
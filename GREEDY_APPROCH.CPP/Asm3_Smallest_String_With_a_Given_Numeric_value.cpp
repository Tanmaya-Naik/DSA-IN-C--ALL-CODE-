#include <iostream>
#include <vector>
#include <string>
using namespace std;

string GEtsmall(int n, int k) {
    vector<int> ans(n, 1); // Step 1: Start with 'aaa...' (all 1s)
    k -= n; // Step 2: Remaining value to distribute
    int i = n - 1;

    while (k > 0) {
        if (k > 25) {
            ans[i] = 26;
            k -= 25;
        } else {
            ans[i] = k + 1;
            k = 0;
        }
        i--; // Move left
    }

    string output;
    for (int i = 0; i < ans.size(); i++) {
        output += char(ans[i] + 96);
    }
    return output;
}

int main() {
    int n = 5, k = 50;
    cout << GEtsmall(n, k) << endl; 
    return 0;
}

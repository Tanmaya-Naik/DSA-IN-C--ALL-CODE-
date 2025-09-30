#include <iostream>
#include <string>
#include <stack>

using namespace std;

string Decode(string s) {
    stack<int> multipliers;   // Stack to store multipliers
    stack<string> partialStrings; // Stack to store partial strings
    string ans = "";          // Current decoded string
    int num = 0;              // To extract numbers from the string

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            // Build the full number for the multiplier
            num = num * 10 + (s[i] - '0');
        } else if (s[i] == '[') {
            // Push the current multiplier and string onto their respective stacks
            multipliers.push(num);
            partialStrings.push(ans);
            // Reset for the next encoded segment
            num = 0;
            ans = "";
        } else if (s[i] == ']') {
            // Pop the multiplier and previous string
            int multiplier = multipliers.top();
            multipliers.pop();
            string previousString = partialStrings.top();
            partialStrings.pop();
            // Multiply the current string and append to the previous string
            string temp = "";
            for (int j = 0; j < multiplier; j++) {
                temp += ans;
            }
            ans = previousString + temp;
        } else {
            // Add characters to the current string
            ans += s[i];
        }
    }

    return ans;
}

int main() {
    string str = "3[a]12[bc]";
    cout << "Decoded String: " << Decode(str) << endl;
    return 0;
}



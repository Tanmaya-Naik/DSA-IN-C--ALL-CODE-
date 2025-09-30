#include <iostream>
using namespace std;

int main() {
    string str = "abaniiloveyou";
    int count = 0;

    
    bool isCounted[5] = {false, false, false, false, false}; 
                       // 'a', 'e', 'i', 'o', 'u'
    for (char ch : str) {
        if (ch == 'a' && !isCounted[0]) {
            count++;
            isCounted[0] = true; // Mark 'a' as counted
        } else if (ch == 'e' && !isCounted[1]) {
            count++;
            isCounted[1] = true; // Mark 'e' as counted
            
        } else if (ch == 'i' && !isCounted[2]) {
            count++;
            isCounted[2] = true; // Mark 'i' as counted
        } else if (ch == 'o' && !isCounted[3]) {
            count++;
            isCounted[3] = true; // Mark 'o' as counted
        } else if (ch == 'u' && !isCounted[4]) {
            count++;
            isCounted[4] = true; // Mark 'u' as counted
        }
    }

    cout << "The number of unique vowels is: " << count << endl;
    return 0;
}

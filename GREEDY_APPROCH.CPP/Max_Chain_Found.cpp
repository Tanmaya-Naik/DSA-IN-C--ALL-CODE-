#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// pass by reference to avoid copying
bool compare(const pair<int, int>& P1, const pair<int, int>& P2) {
    return P1.second < P2.second;
}

int main() {
    vector<pair<int, int>> pairs = {
        {5, 24}, {39, 60}, {5, 28}, {27, 40}, {50, 90}
    };

    // Sorting pairs based on the second value (end time)
    sort(pairs.begin(), pairs.end(), compare);

    int count = 1;
    int currEndval = pairs[0].second;

    cout << "Selected pairs forming the maximum chain:\n";
    cout << "(" << pairs[0].first << ", " << pairs[0].second << ")\n";

    for (int i = 1; i < pairs.size(); i++) {
        if (pairs[i].first >= currEndval) {
            cout << "(" << pairs[i].first << ", " << pairs[i].second << ")\n";
            count++;
            currEndval = pairs[i].second;
        }
    }

    cout << "The maximum pair chain we can get is " << count << endl;
    return 0;
}

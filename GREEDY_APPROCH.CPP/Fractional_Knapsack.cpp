#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparison function to sort items in decreasing order of value-to-weight ratio
bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first; // Sort by ratio in descending order
}

// Function to calculate the maximum value that can be obtained in a Fractional Knapsack
double FractionalKnapsack(vector<int> value, vector<int> weight, int TotalCapacity) {
    int n = value.size();
    double maxValue = 0.0; // Variable to store the maximum value we can obtain

    // Step 1: Create a vector of pairs to store (value-to-weight ratio, index)
    vector<pair<double, int>> ratios(n);

    for (int i = 0; i < n; i++) {
        double ratio = value[i] / (double)weight[i]; // Calculate value-to-weight ratio
        ratios[i] = make_pair(ratio, i); // Store the ratio and index
    }

    // Step 2: Sort items in descending order of their value-to-weight ratio
    sort(ratios.begin(), ratios.end(), compare);

    // Step 3: Pick items greedily
    for (int i = 0; i < n; i++) {
        int idx = ratios[i].second; // Get the original index of the item
        if (weight[idx] <= TotalCapacity) {
            // If we can take the whole item, take it
            maxValue += value[idx];
            TotalCapacity -= weight[idx];
        } else {
            // If we can take only a fraction of the item
            maxValue += ratios[i].first * TotalCapacity; // Add fractional value
            break; // Knapsack is full
        }
    }

    cout << "The maximum value that can be obtained = " << maxValue << endl;
    return maxValue;
}

int main() {
    // Values and weights of items
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int TotalCapacity = 50; // Maximum capacity of knapsack

    // Function call
    FractionalKnapsack(value, weight, TotalCapacity);

    return 0;
}

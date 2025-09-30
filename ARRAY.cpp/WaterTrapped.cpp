#include <iostream>
#include <limits.h> // For using INT_MAX and other constants
using namespace std;

// Function to calculate the total amount of trapped water
void TrappedWater(int *heights, int n) {
    int leftmax[2000];  // Array to store the maximum heights to the left of each bar
    int rightmax[2000]; // Array to store the maximum heights to the right of each bar

    // Initialize the first element of leftmax to the height of the first bar
    leftmax[0] = heights[0];
    // Compute the maximum height to the left of each bar
    for (int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i - 1], heights[i - 1]);
    }

    // Initialize the last element of rightmax to the height of the last bar
    rightmax[n - 1] = heights[n - 1];
    // Compute the maximum height to the right of each bar
    for (int i = n - 2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], heights[i + 1]);
    }

    int trappedWater = 0; // Variable to store the total trapped water

    // Iterate through each bar to calculate trapped water
    for (int i = 0; i < n; i++) {
        // Calculate the water that can be trapped above the current bar
        int currWater = min(leftmax[i], rightmax[i]) - heights[i];

        // Add the trapped water to the total if it's positive
        if (currWater > 0) {
            trappedWater += currWater;
        }
    }

    // Print the total amount of trapped water
    cout << "Total water trapped = " << trappedWater << endl;
}

int main() {
    // Array representing the heights of bars
    int heights[] = {4,3,2,0,6,5,7,3};
    // Calculate the number of elements in the array
    int n = sizeof(heights) / sizeof(int);

    // Call the function to calculate trapped water
    TrappedWater(heights, n);

    return 0; // Return 0 to indicate successful execution
}

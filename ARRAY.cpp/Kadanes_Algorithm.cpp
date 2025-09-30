#include <iostream>
#include <limits.h>
using namespace std;

// Function to calculate the maximum sum of any contiguous subarray
void MaxSumSubArray3(int *arr, int n) {
    // Initialize maxsum with the smallest possible integer value
    // so that we can track the maximum sum encountered during the iteration
    int maxsum = INT_MIN;
    
    // Initialize currSum to 0, which will be used to keep track of the sum of the current subarray
    int currSum = 0;
    
    // Iterate through each element of the array
    for (int i = 0; i < n; i++) {
        // Add the current element to the running sum (currSum)
        currSum += arr[i];
        
        // If the current sum (currSum) is greater than the previously recorded maxsum, update maxsum
        if (currSum > maxsum) {
            maxsum = currSum;
        }
        
        // If the current sum (currSum) becomes negative, reset it to 0
        // because continuing with a negative sum would only decrease the total of any future subarrays
        if (currSum < 0) {
            currSum = 0;
        }
    }
    
    // Output the maximum sum of any contiguous subarray
    cout << "The maximum sum value of subarrays is " << maxsum << endl;
}

int main() {
    // Example array with both positive and negative numbers
    int arr[] = {7, -8, 6, -5, 8, -3, 4};
    
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(int);
    
    // Call the function to find the maximum sum of subarrays
    MaxSumSubArray3(arr, n);
    
    return 0;
}

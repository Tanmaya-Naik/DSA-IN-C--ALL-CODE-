#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp;

    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp.push_back(nums[i]);
    }

    // Shift the remaining elements to the front
    for (int j = k; j < n; j++) {
        nums[j - k] = nums[j];
    }

    // Copy the temp elements to the end
    for (int t = n - k; t < n; t++) {
        nums[t] = temp[t - (n - k)];
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;

    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    rotateArray(nums, k);

    cout << "Left Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

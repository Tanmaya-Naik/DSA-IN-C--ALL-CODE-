#include <iostream>
using namespace std;

void Find_Greater_value(int matrix[][4], int row, int col, int target) {
    int i = 0, j = col - 1; // Start at the top-right corner
    int result = -1; // To store the smallest valid value
    int res_i = -1, res_j = -1; // To store the position of the result

    while (i < row && j >= 0) {
        if (matrix[i][j] >= target) {
            // Update result if current element satisfies the condition
            result = matrix[i][j];
            res_i = i;
            res_j = j;

            // Move left to search for smaller elements in the same row
            j--;
        } else {
            // Move down to find larger elements
            i++;
        }
    }

    if (result != -1) {
        cout << "Target found at " << res_i << "," << res_j << " with value " << result << endl;
    } else {
        cout << "No element greater than or equal to " << target << " found in the matrix." << endl;
    }
}

int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int target = 37;
    Find_Greater_value(matrix, 4, 4, target);
    return 0;
}

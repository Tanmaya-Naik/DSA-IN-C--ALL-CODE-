#include <iostream>
using namespace std;

// Function to print a 2D matrix in spiral order
void Spiralmat(int matrix[][4], int n, int m) {
    // Define the starting and ending indices for rows and columns
    int srow = 0, scol = 0; // Start of rows and columns
    int erow = n - 1, ecol = m - 1; // End of rows and columns

    // Loop to traverse the matrix in a spiral pattern
    while (srow <= erow && scol <= ecol) {
        // Traverse the top row from left to right
        for (int i = scol; i <= ecol; i++) {
            cout << matrix[srow][i] << ",";
        }

        // Traverse the right column from top to bottom
        for (int j = srow + 1; j <= erow; j++) {
            cout << matrix[j][ecol] << ",";
        }

        // Check if the top row and bottom row are the same to avoid duplication
        if (srow < erow) {
            // Traverse the bottom row from right to left
            for (int i = ecol - 1; i >= scol; i--) {
                cout << matrix[erow][i] << ",";
            }
        }

        // Check if the left column and right column are the same to avoid duplication
        if (scol < ecol) {
            // Traverse the left column from bottom to top
            for (int j = erow - 1; j > srow; j--) {
                cout << matrix[j][scol] << ",";
            }
        }

        // Move the boundaries inward to process the next inner spiral
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main() {
    // Define a 4x4 matrix
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Call the function to print the matrix in spiral order
    Spiralmat(matrix, 4, 4);

    return 0;
}

/*
Edge Case Explanation:
1. **Single Row Remaining**:
   - When `srow == erow`, the top and bottom rows are the same.
   - If we do not check with `if (srow < erow)`, the bottom row will be printed twice.
   - Example:
     Input: 1x4 matrix -> {1, 2, 3, 4}
     Without the condition: Output -> 1,2,3,4,4,3,2,1,
     With the condition: Output -> 1,2,3,4,

2. **Single Column Remaining**:
   - When `scol == ecol`, the left and right columns are the same.
   - If we do not check with `if (scol < ecol)`, the left column will be printed twice.
   - Example:
     Input: 4x1 matrix -> {1}, {2}, {3}, {4}
     Without the condition: Output -> 1,2,3,4,4,3,2,1,
     With the condition: Output -> 1,2,3,4,

By adding these checks, we avoid duplicate printing in these edge cases.
*/
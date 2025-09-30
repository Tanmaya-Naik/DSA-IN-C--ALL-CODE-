#include <iostream>
using namespace std;

// Function to print the Sudoku board
void PrintSodoku(int sodoku[][9]) {
    for (int i = 0; i < 9; i++) { // Loop through each row
        for (int j = 0; j < 9; j++) { // Loop through each column
            cout << sodoku[i][j] << " "; // Print each cell
        }
        cout << endl; // New line after each row
    }
}

// Function to check if placing 'digit' at (row, col) is safe--

bool isSafe(int sodoku[9][9], int row, int col, int digit) {
    // Check the column for duplicates
    for (int i = 0; i < 9; i++) {
        if (sodoku[row][i] == digit) {
            return false; // Found a duplicate in the column
        }
    }

    // Check the row for duplicates
    for (int j = 0; j < 9; j++) {
        if (sodoku[j][col] == digit) {
            return false; // Found a duplicate in the row
        }
    }

    // Check the 3x3 subgrid for duplicates
    int startrow = (row / 3) * 3; // Starting row of the grid
    int startcol = (col / 3) * 3; // Starting column of the grid
    for (int i = startrow; i < startrow + 3; i++) {
        for (int j = startcol; j < startcol + 3; j++) {
            if (sodoku[i][j] == digit) {
                return false; // Found a duplicate in the grid
            }
        }
    }

    return true; // No duplicates found, safe to place
}

// Recursive function to solve the Sudoku puzzle

bool SodokuSolver(int sodoku[9][9], int row, int col) {
    // Base case: If we've filled all rows, we've solved the puzzle
    if (row == 9) {
        PrintSodoku(sodoku); // Print the solved Sudoku
        return true; // Indicate that a solution has been found
    }

    // Calculate the next cell coordinates
    int nextrow = row;
    int nextcol = col + 1; // Move to the next column
    if (nextcol == 9) { // If we reach the end of the row
        nextrow = row + 1; // Move to the next row
        nextcol = 0; // Reset column to 0
    }

    // If the current cell is already filled, move to the next cell
    if (sodoku[row][col] != 0) {
        return SodokuSolver(sodoku, nextrow, nextcol); // Recursively solve for next cell
    }

    // Try placing digits from 1 to 9 in the current cell
    for (int digit = 1; digit <= 9; digit++) {
        // Check if placing this digit is safe
        if (isSafe(sodoku, row, col, digit)) {
            sodoku[row][col] = digit; // Place the digit tentatively

            // Recursive call to solve the rest of the board
            if (SodokuSolver(sodoku, nextrow, nextcol)) {
                return true; // If the rest of the board is solved, propagate success
            }

            // If the placement didn't lead to a solution, backtrack
            sodoku[row][col] = 0; // Reset the cell to 0 (undo the placement)
        }
    }

    return false; // No valid digit found; backtrack
}

int main() {
    // Initialize the Sudoku puzzle (0s represent empty cells)
    int sodoku[9][9] = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}
    };

    // Start solving the Sudoku from the first cell (0, 0)
    SodokuSolver(sodoku, 0, 0);
    return 0; // End of the program
}



#include <iostream>
int main(){
    int main(){
        what is th
    }
}
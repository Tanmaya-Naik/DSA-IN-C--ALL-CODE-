#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to print the current state of the chessboard
void PrintBoard(vector<vector<char>> Board) {
    int n = Board.size();
    // Loop through the rows of the board
    for (int i = 0; i < n; i++) {
        // Loop through the columns of the board
        for (int j = 0; j < n; j++) {
            cout << Board[i][j] << " "; // Print each cell ('Q' for queen, '.' for empty)
        }
        cout << endl; // Move to next line after each row
    }
    cout << "----------------" << endl; // Separate solutions for clarity
}

// Function to check if placing a queen at (row, colon) is safe
bool isSafe(vector<vector<char>> Board, int row, int column) {
    int n = Board.size();

    // Check the row horizontally to the left (since no queens will be placed on the right yet)
    for (int j = 0; j < n; j++) {
        if (Board[row][j] == 'Q') { // If a queen is already in the same row
            return false; // Not safe to place a queen
        }
    }

    // Check the column vertically upwards
    for (int i = 0; i < row; i++) {
        if (Board[i][column] == 'Q') { // If a queen is already in the same column
            return false; // Not safe to place a queen
        }
    }

    // Check the diagonal to the top-left
    for (int i = row, j = column; i >= 0 && j >= 0; i--, j--) {
        if (Board[i][j] == 'Q') { // If a queen is found in the top-left diagonal
            return false; // Not safe to place a queen
        }
    }

    // Check the diagonal to the top-right
    for (int i = row, j = column; i >= 0 && j < n; i--, j++) {
        if (Board[i][j] == 'Q') { // If a queen is found in the top-right diagonal
            return false; // Not safe to place a queen
        }
    }

    return true; // Safe to place the queen
}

// Recursive function to solve the N-Queens problem
int NQueen(vector<vector<char>> Board, int row) {
    int n = Board.size();
    // Base case: If all rows are filled, a solution is found
    if (row == n) {
        PrintBoard(Board); // Print the current valid solution
        return 1; // Return 1 to indicate one solution is found
    }

    int count = 0; // Count number of solutions found at the current level

    // Try placing a queen in each column of the current row
    for (int j = 0; j < n; j++) {
        if (isSafe(Board, row, j)) { // If it's safe to place a queen at (row, j)
            Board[row][j] = 'Q'; // Place the queen

            // Recursive call to attempt to solve for the next row
            count += NQueen(Board, row + 1); // Add the solutions found in the deeper levels

            Board[row][j] = '.'; // Backtrack: Remove the queen and try the next position
        }
    }

    return count; // Return the total number of solutions found at this level
}

int main() {
    vector<vector<char>> Board; // 2D vector to represent the chessboard
    int n = 4; // Size of the board (can change to any value)
    
    // Initialize the board with '.' representing empty cells
    for (int i = 0; i < n; i++) {
        vector<char> newRow; // Create a new row
        for (int j = 0; j < n; j++) {
            newRow.push_back('.'); // Fill the row with empty cells
        }
        Board.push_back(newRow); // Add the row to the board
    }

    int count = NQueen(Board, 0); // Start solving the N-Queens problem from row 0
    cout << "Count: " << count; // Print the total number of solutions found

    return 0;
}

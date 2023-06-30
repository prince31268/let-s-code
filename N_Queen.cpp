// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     bool isSafeToPlace(int row, int col, vector<string>& board, int n) {
//         while (row >= 0 && col >= 0) {
//             if (board[row][col] == 'Q') return false;
//             row--;
//             col--;
//         }

//         while (col >= 0) {
//             if (board[row][col] == 'Q') return false;
//             col--;
//         }

//         while (row < n && col >= 0) {
//             if (board[row][col] == 'Q') return false;
//             row++;
//             col--;
//         }
//         return true;
//     }

//     void solving(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
//         if (col == n) {
//             ans.push_back(board);
//             return;
//         }

//         for (int row = 0; row < n; row++) {
//             if (isSafeToPlace(row, col, board, n)) {
//                 board[row][col] = 'Q';
//                 solving(col + 1, board, ans, n);
//                 board[row][col] = '.';
//             }
//         }
//     }

//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<string> board(n);
//         string s(n, '.');
//         for (int i = 0; i < n; i++) board[i] = s;
//         solving(0, board, ans, n);
//         return ans;
//     }
// };

// int main() {
//     int n = 4; // Change n to the desired board size

//     Solution sol;
//     vector<vector<string>> result = sol.solveNQueens(n);

//     // Print the result
//     for (const auto& board : result) {
//         for (const auto& row : board) {
//             cout << row;
//         }
//         cout << endl;
//     }

//     return 0;
// }



//OR


#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void solving(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& leftRow, vector<int>& lowerDiagonal, vector<int>& upperDiagonal, int n) {
    if (col == n) {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++) {
        if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            solving(col + 1, board, ans, leftRow, lowerDiagonal, upperDiagonal, n);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++) {
        board[i] = s;
    }
    vector<int> leftRow(n, 0), lowerDiagonal(2 * n - 1, 0), upperDiagonal(2 * n - 1, 0);
    solving(0, board, ans, leftRow, lowerDiagonal, upperDiagonal, n);
    return ans;
}

int main() {
    int n = 4; // Change n to the desired board size

    vector<vector<string>> result = solveNQueens(n);

    // Print the result
    for (const auto board : result) {
        for (const auto row : board) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}

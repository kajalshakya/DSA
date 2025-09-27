#include <bits/stdc++.h>
using namespace std;
// Time complexity : O(n+m)
// Space complexity :O(1)
vector<int> searchKey(vector<vector<int>> &matrix, int key) {
    int row = 0;                     
    int col = matrix[0].size() - 1;  

    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == key) {
            // Key found, return 1-based indices
            return {row + 1, col + 1};
        } else if (matrix[row][col] > key) {
            // Move left
            col--;
        } else {
            // Move down
            row++;
        }
    }
    // Key not found
    return {-1, -1};
}

int main() {
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    vector<int> result = searchKey(matrix, 29); // Searching for 29
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

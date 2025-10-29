#include <bits/stdc++.h>
using namespace std;
//Time complexity: O(m × n)
//Space omplexity: O(m + n)
vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();      
    int n = matrix[0].size();  
    vector<int> rows;  
    vector<int> cols;  

    //  Identify which rows and columns should be zeroed
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows.push_back(i); // Store the row index
                cols.push_back(j); // Store the column index
            }
        }
    }

    //  Set all elements of the marked rows to zero
    for (int i = 0; i < rows.size(); i++) {
        int r = rows[i];
        for (int j = 0; j < n; j++) {
            matrix[r][j] = 0;
        }
    }

    //  Set all elements of the marked columns to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < cols.size(); j++) {
            int c = cols[j]; // ✅ Fixed: use cols[j], not cols.size()
            matrix[i][c] = 0;
        }
    }

    return matrix; // Return the modified matrix
}

int main() {
    vector<vector<int>> matrix = { {1, 1, 1},
                                   {1, 0, 1},
                                   {1, 1, 1} };

    vector<vector<int>> result = setZeroes(matrix);

    // Print the result matrix
    for (auto i : result) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

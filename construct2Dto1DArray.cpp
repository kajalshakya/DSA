#include <bits/stdc++.h>
using namespace std;
// time complexity :O(N)
//space complexity :O(N)

vector<int> convert2Dto1D(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return {};
    int cols = matrix[0].size();

    vector<int> arr(rows * cols);
    int index = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[index++] = matrix[i][j];
        }
    }
    return arr;
}

int main() {
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}};
    vector<int> result = convert2Dto1D(matrix);
    for (auto val : result) {
        cout << val << " ";
    }
}

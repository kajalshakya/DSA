#include <bits/stdc++.h>
using namespace std;
// Time Complexity: O(n * m)
//Space Complexity: O(1)


vector<int> searchKey(int matrix[4][4], int n, int m, int key) {
    for (int i = 0; i < n; i++) {          // O(n)
        for (int j = 0; j < m; j++) {      // O(m)
            if (matrix[i][j] == key) {
                return {i + 1, j + 1};
            }
        }
    }
    return {-1, -1};
}

int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 33;
    vector<int> res = searchKey(matrix, 4, 4, key);

    if (res[0] == -1) {
        cout << "Key " << key << " not found in matrix." << endl;
    } else {
        cout << "Key " << key << " found at position: (" << res[0] << ", " << res[1] << ")" << endl;
    }

    return 0;
}

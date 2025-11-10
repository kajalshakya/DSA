#include <bits/stdc++.h>
using namespace std;
//time complexity:O(N)
//space complexity:O(1)
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> diff(52, 0);

        // Mark interval contributions
        for (auto &range : ranges) {
            int start = range[0];
            int end   = range[1];

            diff[start]++;       
            diff[end + 1]--;     
        }

        // Prefix sum to compute coverage
        int coverage = 0;
        for (int i = 1; i <= 50; i++) {
            coverage += diff[i];

            // Check numbers in target range
            if (i >= left && i <= right && coverage == 0) {
                return false;
            }
        }

        return true;
    }

int main() {
  
    vector<vector<int>> ranges = {{1, 2}, {3, 4}, {5, 6}};
    int left = 2, right = 5;

    cout<<isCovered(ranges, left, right);

   
    return 0;
}

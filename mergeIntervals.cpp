#include <bits/stdc++.h>
using namespace std;
//Time complexity: O(n log n)
//Space complexity:O(1)

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Sort intervals by start
    sort(intervals.begin(), intervals.end());

    int index = 0; // pointer to place merged intervals
    for(int i = 1; i < intervals.size(); i++) {
        // If overlapping, merge into intervals[index]
        if(intervals[i][0] <= intervals[index][1]) {
            intervals[index][1] = max(intervals[index][1], intervals[i][1]);
        } 
        else {
            // Move to next interval position
            index++;
            intervals[index] = intervals[i];
        }
    }

    // Result is only the merged section [0 .. index]
    intervals.resize(index + 1);
    return intervals;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    
    auto ans = merge(intervals);

    cout << "Merged Intervals: ";
    for(auto &i : ans) {
        cout << "[" << i[0] << "," << i[1] << "] ";
    }
    cout << endl;
}

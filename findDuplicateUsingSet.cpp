#include <bits/stdc++.h>
using namespace std;
//time complexity O(n) average, O(n²) worst-case
//space complexity O(n)

    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // to store numbers we have seen
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return num; // duplicate found
            } else {
                seen.insert(num);
            }
        }
        return -1; // no duplicate found
    }


int main() {
   
    vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = findDuplicate(nums);
    if (duplicate != -1) {
        cout << "Duplicate number: " << duplicate << endl;
    } else {
        cout << "No duplicate found." << endl;
    }

    return 0;
}

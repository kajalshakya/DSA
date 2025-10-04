#include <bits/stdc++.h>
using namespace std;

// Function to find majority element using Boyer-Moore
int majorityElement(vector<int>& nums) {
    int candidate = nums[0];
    int count = 1;

    // Step 1: Find candidate
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2)
        return candidate;
    else
        return -1; // No majority element exists
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 4, 2,2};

    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element exists." << endl;

    return 0;
}
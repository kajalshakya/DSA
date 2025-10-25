#include <bits/stdc++.h>
using namespace std;

// Function to search target in a rotated sorted array (handles duplicates)
bool search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is the target
        if (nums[mid] == target) return true;

        // Check if left half is sorted
        if (nums[low] < nums[mid]) {
            if (target >= nums[low] && target < nums[mid])
                high = mid - 1; // Target in left half
            else
                low = mid + 1;  // Target in right half
        }
        // Check if right half is sorted
        else if (nums[mid] < nums[high]) {
            if (target > nums[mid] && target <= nums[high])
                low = mid + 1;  // Target in right half
            else
                high = mid - 1; // Target in left half
        }
        // Cannot determine sorted half due to duplicates
        else {
            if (nums[low] == nums[mid]) low++;   // Skip duplicate on left
            if (nums[high] == nums[mid]) high--; // Skip duplicate on right
        }
    }

    // Target not found
    return false;
}

int main() {
    vector<int> nums = {2,5,6,0,0,1,2,3};
    int target = 3;

    if (search(nums, target))
        cout << "Target found";
    else
        cout << "Target not found";

    return 0;
}

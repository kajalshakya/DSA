#include <bits/stdc++.h>
using namespace std;



    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int i = n - 2;

        // Find first index from right where nums[i] < nums[i + 1]
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // If such index exists, find element just larger than nums[i] on the right
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]); // Swap them
        }

        // Reverse the part after index i
        reverse(nums.begin() + i + 1, nums.end());
    }



int main() {

    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}

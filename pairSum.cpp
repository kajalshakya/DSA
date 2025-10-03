#include <bits/stdc++.h>
using namespace std;

vector<int> pairsum(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;
    vector<int> ans;

    while (st < end) {
        int currSum = nums[st] + nums[end];

        if (currSum == target) {
            ans.push_back(st);
            ans.push_back(end);
            break; // stop after finding the first pair
        } 
        else if (currSum > target) {
            end--;
        } 
        else {
            st++;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 4, 7};
    int target = 8;
    vector<int> ans = pairsum(nums, target);

    if (!ans.empty()) {
        cout << "Pair indices: " << ans[0] << ", " << ans[1] << endl;
        cout << "Pair values: " << nums[ans[0]] << ", " << nums[ans[1]] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}

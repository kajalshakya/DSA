#include <bits/stdc++.h>
using namespace std;
   int xorBeauty(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans ^= num;  // XOR all elements
        }
        return ans;
    }


int main() {
   
    vector<int> nums = {1, 2, 4};
    cout << "XOR Beauty: " <<xorBeauty(nums) << endl;
    return 0;
}

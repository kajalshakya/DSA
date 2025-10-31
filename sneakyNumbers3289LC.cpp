#include <bits/stdc++.h>
using namespace std;
//time complexity:avg O(N),worst:O(N^2)Only if heavy hash collision
//space complexity:O(N)

vector<int> getSneakyNumbers(const vector<int>& nums) {
    unordered_map<int, int> mp;
    vector<int> result;

    for (int num : nums) {
        if (++mp[num] == 2) {   // increment frequency
            result.push_back(num);  // push only when it appears second time
        }
    }
    return result;
}

int main() {
    vector<int> nums = {0, 3, 2, 1, 3, 2};
    vector<int> sneaky = getSneakyNumbers(nums);

    cout << "Sneaky numbers: ";
    for (int x : sneaky) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

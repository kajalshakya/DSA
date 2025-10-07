#include <bits/stdc++.h>
using namespace std;
//Time Complexity=O(n)
//Space Complexity=O(1)
int singleNumber(vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans ^= arr[i]; // XOR all elements
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 2, 3};
    int ans = singleNumber(arr); // store as int
    cout << "Single number is " << ans << endl;
    return 0;
}

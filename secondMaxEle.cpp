#include <bits/stdc++.h>
using namespace std;

int secondMax(vector<int>& arr) {
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }
    return max2;
}

int main() {
    vector<int> arr = {3, 3, 1, 2, 5, 8, 7};
    int second = secondMax(arr);

    if (second == INT_MIN) {
        cout << "Second max element does not exist";
    } else {
        cout << "Second max element is " << second;
    }

    return 0;
}

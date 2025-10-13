#include <bits/stdc++.h>
using namespace std;
//time complexity O(N)
//space complexity O(1)


int findDuplicate(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]); // Get the original value as index

        // If the value at this index is positive, mark it negative
        if (arr[index] >= 0) {
            arr[index] = -arr[index];
        } 
        // If already negative, we found a duplicate
        else {
            return index;
        }
    }
    return -1; // No duplicate found
}

int main() {
    vector<int> arr = {1, 3, 4, 4, 2};

    int duplicate = findDuplicate(arr);
    if (duplicate != -1) {
        cout << "Duplicate number: " << duplicate << endl;
    } else {
        cout << "No duplicate found." << endl;
    }

    return 0;
}

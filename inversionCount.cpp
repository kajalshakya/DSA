#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves and count cross inversions
int merge(vector<int>& arr, int si, int mid, int ei) {
    int i = si, j = mid + 1, count = 0;
    vector<int> temp;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else {
            temp.push_back(arr[j++]);
            count += (mid - i + 1); // elements left in left half > arr[j]
        }
    }

    while (i <= mid) {
        // remaining left
        temp.push_back(arr[i++]);
    } 
    while (j <= ei) {
        // remaining right
        temp.push_back(arr[j++]); 

    }
    for (int k = si, x = 0; k <= ei; k++) {
        // copy back
        arr[k] = temp[x++];
    } 
    return count;
}

// Count inversions using divide & conquer
int countInversion(vector<int>& arr, int si, int ei) {
    // base case
    if (si >= ei){
           return 0;
        }

    int mid = si + (ei - si) / 2;

    int left = countInversion(arr, si, mid);
    int right = countInversion(arr, mid + 1, ei);
    int cross = merge(arr, si, mid, ei);

    return left + right + cross;
}

int main() {
    vector<int> arr = {2, 4, 1, 5, 3}; // (2,1), (4,1), (4,3), (5,3)
    cout << "Count: " << countInversion(arr, 0, arr.size() - 1);
    return 0;
}

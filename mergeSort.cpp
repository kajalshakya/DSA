#include <bits/stdc++.h>
using namespace std;
//time complexity:O(NlogN)
//space complexity:O(N)

// Function to merge two sorted halves of the array
void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;  // Temporary array to store merged result

    int i = si;       // Pointer for left half
    int j = mid + 1;  // Pointer for right half

    // Merge both halves into temp[] in sorted order
    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Copy remaining elements (if any) from left half
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Copy remaining elements (if any) from right half
    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy sorted elements from temp[] back to the original array
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

// Recursive function to divide the array and sort each half
void mergeSort(int arr[], int si, int ei) {
    // Base case: single element or invalid range
    if (si >= ei) return;

    // Find the middle index to divide array
    int mid = si + (ei - si) / 2;

    // Recursively sort left half
    mergeSort(arr, si, mid);

    // Recursively sort right half
    mergeSort(arr, mid + 1, ei);

    // Merge the two sorted halves
    merge(arr, si, mid, ei);
}

// Function to print the array
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);  

    cout << "Original array: ";
    printArr(arr, n);

    // Sort the array using Merge Sort
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArr(arr, n);

    return 0;
}

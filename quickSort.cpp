#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity:
Best / Avg: O(N log N)
Worst: O(N^2)
Space: O(log N)
*/

// Partition function (places pivot at correct position)
int partition(int arr[], int si, int ei) {
    int pivot = arr[ei];
    int i = si - 1;
    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[ei]);
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return; // base case

    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx - 1);  // left part
    quickSort(arr, pivotIdx + 1, ei);  // right part
}

// Print array
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArr(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArr(arr, n);

    return 0;
}



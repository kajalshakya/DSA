#include <bits/stdc++.h>
using namespace std;

    //   Best Case (already sorted)   : O(n)
    //   Average Case                 : O(n^2)
    //   Worst Case (reverse sorted)  : O(n^2)
    void printArray(int arr[], int n){
        cout<<" sorted array :";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    }

int insertionSort( int arr[], int n){
    int swapCount=0;
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j]< arr[j-1]){
            swap(arr[j] ,arr[j-1]);
            swapCount++;
            j--;
        }
    }  printArray(arr, n);
    cout<<" total swaps is ";
    return swapCount;
    
}


    
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<insertionSort(arr, n);
}

   




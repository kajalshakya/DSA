#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[] ,int n){
    cout<<" Sorted array :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

// Best: O(n) with optimization (already sorted)
// Worst/Average: O(n^2)
// Stable, but many swaps
int  bubbleSort( int arr[], int n){
    int swapCount=0;
    for(int i =0; i<n-1; i++){
        bool isSwap= false;
        for( int j=0; j<n-i-1; j++){
            if( arr[j]> arr[j+1]){
                swap(arr[j] ,arr[j+1] );
                isSwap=true;
                swapCount++;
            }
        }
        if(!isSwap) break;
        
    }
    printArr(arr , n);
    cout<<" Total swaps are ";
    return swapCount;
}
int main(){
    int arr[]={ 5,2,6,8,1,3,2,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<bubbleSort(arr, n);
  
    return 0;
}
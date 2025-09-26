#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[] ,int n){
    cout<<" Sorted array :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
// Best/Worst/Average: O(n^2)
// Not stable, but fewer swaps
int selectionSort( int arr[], int n){
    int swapCount=0;
    for(int i=0; i<n-1;i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
        swapCount++;
    }
    printArr(arr , n);
    cout<<" Total swaps are ";
    return swapCount;
}
int main(){
    int arr[]={ 5,2,7,3,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<selectionSort(arr, n);
  
    return 0;
}
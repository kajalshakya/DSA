#include<bits/stdc++.h>
using namespace std;
void printArray( int arr[],int n){
    cout<<" Sorted array :";
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity : O(n + range)
// Space Complexity: O(range)
// stable

void countingSort( int arr[], int n){
    // creating a frequency array
    int freq[100000]={0};
 
    int maxVal=INT_MIN,minVal=INT_MAX;
    
    //put frequencies of elelments and    // find the range
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        maxVal=max(maxVal,arr[i]);
        minVal=min(minVal,arr[i]);
    
    }
    //initalizing sorted elements
    for( int i=minVal,j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    printArray(arr ,n );
}

int main(){
    int arr[] ={ 1, 4, 1 ,3, 2, 4, 3, 7 };
    int n= sizeof(arr)/sizeof(int);
    countingSort(arr ,n );
    return 0;
}
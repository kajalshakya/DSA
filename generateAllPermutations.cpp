#include<bits/stdc++.h>
using namespace std;
//time complexity:O(n × n!)
//space complexity:O(n)Auxiliary (stack only)

void generatePermutations(vector<int>&arr,int i){
    //base case
    if(i==arr.size()){
        for(int val:arr){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
      // Loop through all possible elements that can be placed at position 'i'
    for(int j=i;j<arr.size();j++){

        // Swap current element (arr[i]) with arr[j]
        // to fix one element at index 'i'
        swap(arr[i],arr[j]);
        // Recur for the next index
        generatePermutations(arr,i+1);

        // Backtrack: undo the swap to restore the original array
        // before the next iteration
        swap(arr[i],arr[j]);

    }
}
int main(){
    vector<int>arr = {1,2,3};
    generatePermutations(arr,0);

    return 0;
}
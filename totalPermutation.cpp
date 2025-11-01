#include<bits/stdc++.h>
using namespace std;
//time complexity:O(NXN!)  n! permutations × O(n) work per permutation
//space complexity:O(N) recursion depth   
void permute(vector<int>&arr,int l){
    //base case
    if(l==arr.size()-1){
        for(int x:arr){
            cout<<x;
        }cout<<endl;
        return; 
    }
    for(int i=l;i<arr.size();i++){
        swap(arr[l],arr[i]);//choose
        permute(arr, l+1);//explore
        swap(arr[l],arr[i]);//un-choose or backtrack

    }
    
}


int main(){
    vector<int>arr={1,2,3};
    permute(arr,0);
    
    return 0;
}
    
    
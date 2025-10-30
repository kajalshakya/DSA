#include<bits/stdc++.h>
using namespace std;
//time complexity:O(N)
//space complexity:O(1)
int minNumberOperation(vector<int>&target){
    int ans=target[0];
    for(int i=1;i<target.size();i++){
        if(target[i]>target[i-1]){
            ans+=(target[i]-target[i-1]);
        }
    }
    return ans;
}

int main(){
    vector<int>target={3,1,5,4,2};
    cout<<"operations:"<<minNumberOperation(target);
    return 0;
}
    
    
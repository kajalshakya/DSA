#include<bits/stdc++.h>
using namespace std;
// time complexity:O(N)
// space complexity:O(N)
vector<int>pairSum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int complement =target-nums[i];
        if(mp.find(complement)!=mp.end()){
            return{mp[complement],i};
        }
        mp[nums[i]]=i;
    } return {};// If No Pair found

}
int main (){
     vector<int> nums = {1, 2, 4, 7};
    int target = 8;
    vector<int> ans = pairSum(nums, target);
    if(!ans.empty()){
        cout<<" pair found "<<ans[0]<< "and"<<ans[1]<<endl;
    }
    else{
        cout<<" No pair found"<<endl;
    }
    return 0;
}
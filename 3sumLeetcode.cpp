#include<bits/stdc++.h>
using namespace std;
//time complexity :O(n²)
//space complexity :O(k + log n)
vector<vector<int>>threesum(vector<int>&nums){
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n-2;i++){
        if(i>0&&nums[i]==nums[i-1]) continue;
        int left =i+1;
        int right=n-1;

        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(sum<0){ 
                left++;
            }
            else if(sum>0){
                right--;
            }
            else{
                ans.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while(left<right &&nums[left]==nums[left-1]){
                left++;
            }
                while(left<right && nums[right]==nums[right+1]) {
                right--;
            }
            }
            
        }
    } return ans;
}
int main(){
     vector<int> nums = {-2, 0, 1, 1, 2};

     vector<vector<int>>ans=threesum(nums);
     for(auto i:ans){
        for(auto x :i){
            cout<<x<<" ";
        } cout<<endl;
     }
    return 0;
}
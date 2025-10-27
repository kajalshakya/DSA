#include<bits/stdc++.h>
using namespace std;
//time complexity: O(logN)
//space complexity:O(1)
int singleNonDuplicate(vector<int>&nums){
    int n=nums.size();
    if(n==1)return nums[0];
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid==0 && nums[0]!=nums[1])return nums[0];
        if(mid==n-1 && nums[n-1]!=nums[n-2])return nums[n-1];

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        else if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]==nums[mid-1]){
               low=mid+1; 
            }
            else{
                high=mid-1;
            }
        }
    } return -1;
}
int main(){
    vector<int>nums={1,1,2,3,3,4,4,8,8};
    cout<<"single element is:"<<singleNonDuplicate(nums);
    return 0;
}
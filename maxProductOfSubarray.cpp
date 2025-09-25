#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums){
    int result=nums[0],maxPro=nums[0],minPro=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<0){
            swap(maxPro,minPro);
            }
            maxPro=max(nums[i],maxPro*nums[i]);
            minPro=min(nums[i],minPro*nums[i]);
            result=max(result,maxPro);
        
    }
    return result;
}
int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray = " << maxProduct(nums) << endl;
    return 0;
}
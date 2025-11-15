#include<bits/stdc++.h>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) 
            return 0;

        int i = 0;  // Pointer for the position of the last unique element
        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // Move the next unique element forward
            }
        }

        return i + 1;  // Length of array with unique elements
    }

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<"ans:"<<removeDuplicates(nums);
    return 0;
}
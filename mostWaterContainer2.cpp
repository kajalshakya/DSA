#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n)
//Space Complexity: O(1)
int maxArea(vector<int>& height){
        int maxWater=0;
        int left=0,right=height.size()-1;
        while(left<=right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int currWater=width*ht;
            maxWater=max(maxWater,currWater);
            // Move the pointer pointing to smaller height
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        } return maxWater;

    
    } 

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
 cout << "Maximum water :" << maxArea(height) << endl;
    return 0;
}
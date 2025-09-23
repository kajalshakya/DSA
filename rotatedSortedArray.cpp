#include<bits/stdc++.h>
using namespace std;
int search( vector<int> &nums,int target){
    int low=0,high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[low]<=nums[mid]){
            if(target>=nums[low] && target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        else{
            if(target>=nums[mid] && target<=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    } return -1;

}
int main(){
    vector<int>nums={ 4,5,6,7,0,1,2};
    int target=0;
    int index =(search(nums,target));
    if(index!=-1){
        cout<<" Index is :"<<index<<endl;
    }
    else{
        cout<<" target does not exist :"<<endl;
    }
    return 0;
}
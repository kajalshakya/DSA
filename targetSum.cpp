#include<bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums,int target){
    set<int>s;
    for(int i=0;i<nums.size();i++){
        if(s.find(target-nums[i])!=s.end()){
            return true;
        }
        else{
            s.insert(nums[i]);
        }
    }
    return false;
 
}
int main(){
    vector<int>nums={1,2,4,7};
    int target=8;
    if(search(nums,target)){
        cout<<" Target sum is present "<<endl;
    }
    else{
        cout<<" Target sum is not present "<<endl;
    }
   

    return 0;
}

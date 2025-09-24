#include<bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums){
    unordered_set<int>set;
    for(int i=0;i<nums.size();i++){
        if(set.find(nums[i])==set.end()){
            set.insert(nums[i]);
        }
        else{ 
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>nums={1,1,1,3,3,4,3,2,4,2};
   if(search(nums)){
    cout<<" There exist a duplicate "<<endl;
   }
   else{
        cout<<" All elements are unique "<<endl;
   }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
//time complexity:O(N + M)
//space complexity:O(M)
int numberOfPoints(vector<vector<int>>& nums){
  vector<int>v(102,0);
  for(auto &i:nums){
    v[i[0]]++;
    v[i[1]+1]--;
  }
  int curr=0,count=0;
  for(int i=1;i<102;i++){
    curr+=v[i];
    if(curr>0){
        count++;
    }
  }
  return count;
}

int main() {
    vector<vector<int>>nums = {{3,6},{1,5},{4,7}};
    cout<<"total poits:"<<numberOfPoints(nums);
    return 0;
}


    
    


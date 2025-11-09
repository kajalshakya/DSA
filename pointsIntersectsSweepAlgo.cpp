#include <bits/stdc++.h>
using namespace std;
//time complexity:O(N)
//space complexity:O(1)
int numberOfPoints(vector<vector<int>>& nums){
    unordered_set<int>s;
    for(auto &i:nums){
        for(int j=i[0];j<=i[1];j++){
            s.insert(j);
        }
    }
    return s.size();
}

int main() {
    vector<vector<int>>nums = {{3,6},{1,5},{4,7}};
    cout<<"total poits:"<<numberOfPoints(nums);
    return 0;
}


    
    


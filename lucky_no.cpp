#include <bits/stdc++.h>
using namespace std;
int res(vector<int>&nums){
    int count=0;
   for(int i=0;i<nums.size();i++){
       string s=to_string(nums[i]);
       int inner_count=0;
       for(int j=0;j<s.length();j++){
           if(s[j]=='3'||s[j]=='4'||s[j]=='7'){
               inner_count+=1;
           }
       }
       if(inner_count==3||inner_count==4||inner_count==7){
           count++;
       }
   }return count;
}

int main() {
   vector<int>nums={454442,762345,9977708,17247};
   cout<<res(nums);

    return 0;
}
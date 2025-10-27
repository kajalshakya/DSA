#include<bits/stdc++.h>
using namespace std;
//time complexity:O(N+k) Insert n elements + scan until kth missing
//space complexity:O(N)	HashSet stores all array elements
int findKthPositive(vector<int>&arr,int k){
    unordered_set<int>s(arr.begin(),arr.end());// step 1: store all numbers
    int count=0;
    int num=1;
    while(true){
        if(s.find(num)==s.end()){// number not in array
            count++;
            if(count==k){// found kth missing
                return num;
            }
        }num++;

    }
}
int main(){
    vector<int>arr={2,3,4,7,11};
     int k=5;
    cout<<"kth missing no. :"<<findKthPositive(arr,k);
   
    return 0;
}
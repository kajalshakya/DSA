#include<bits/stdc++.h>
using namespace std;
//time complexity:O(logN) 
//space complexity:O(1)	
int findKthPositive(vector<int>&arr,int k){
    int left=0,right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

    }return left+k;
}
int main(){
    vector<int>arr={2,3,4,7,11};
     int k=5;
    cout<<"kth missing no. :"<<findKthPositive(arr,k);
   
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//time complexity:O(N) 
//space complexity:O(1)	
int findKthPositive(vector<int>&arr,int k){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>k){
            return k;
        }
        else{
            k++;
        }
    } return k;
}
int main(){
    vector<int>arr={2,3,4,7,11};
     int k=5;
    cout<<"kth missing no. :"<<findKthPositive(arr,k);
   
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//time complexity:O(log M*N)
//space complexity:O(1)
bool search(vector<vector<int>>&matrix,int target){
    int m=matrix.size(), n=matrix[0].size();
    int low=0, high=(m*n)-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=mid/n;
        int col=mid%n;
        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }return false;
}


int main(){
    vector<vector<int>>matrix = {{1,3,5,7},
                                {10,11,16,20},
                                {23,30,34,60}} ;
    int target = 72;
    int res=search(matrix,target);
    if(res){
        cout<<"found"<<endl;
    }
    else{
        cout<<"elemnt does not exist";
    }
    return 0;
}
    
    
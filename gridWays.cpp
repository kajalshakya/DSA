#include<bits/stdc++.h>
using namespace std;
//time complexity:O(2^N+M)
//space complexity:O(N+M)
int gridWays(int row,int col,int n,int m,string ans){
    //base case
    if(row==n-1&&col==m-1){
        cout<<ans<<endl;
        return 1;
    }
    //base case
    if(row>=n||col>=m){
        return 0;
    }
    //right
    int val2=gridWays(row,col+1, n, m,ans+"R");
     //down
    int val1=gridWays(row+1,col, n, m,ans+"D");
    return val1+val2;
}

int main(){
   int n=3;
   int m=3;
   string ans="";
   cout<<gridWays(0,0,n,m,ans);
    return 0;
}
    
    
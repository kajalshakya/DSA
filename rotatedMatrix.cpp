#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>>rotateMatrix(vector<vector<int>> &matrix){
    int n=matrix.size(),m=matrix[0].size();
    vector<vector<int>> rotated(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rotated[j][n-i-1]=matrix[i][j];
        }
    } return rotated;
}

int main() {
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<vector<int>>result =rotateMatrix(matrix);
    for(auto i: result){
        for(auto j:i){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}
    
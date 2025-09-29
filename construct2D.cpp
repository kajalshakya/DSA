#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>>construct2D(vector<int>&original ,int n,int m){
    if(original.size()!=n*m) {
         return {};
    }
    
    int row=0,col=0;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<original.size();i++){
        matrix[row][col]=original[i];
        col++;
        if(col==m){
            col=0;
            row++;
        }
    } return matrix;
}
int main(){
    vector<int>original={1,2,3,4,5,6};
    vector<vector<int>>result=construct2D(original, 2,3);
    if(!result.empty()){
        cout << "Matrix formed:" << endl;
    for(auto row:result){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    }else{
        cout<<" matrix not formed "<<endl;
    }
    return 0;
}
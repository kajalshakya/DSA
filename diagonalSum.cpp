#include<bits/stdc++.h>
using namespace std;
int diagonalSum( int matrix[][3] ,int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=matrix[i][i];//primary digonal sum
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];//secondary dogonal sum
        }
    } cout<<" sum is :";    
    return sum;
}

    
int main(){
    int matrix[][3]={{1, 2, 3},
                     {5, 6, 7},
                    {9, 10, 11}
};
    cout<<diagonalSum(matrix, 3)<<endl;
    return 0;
}